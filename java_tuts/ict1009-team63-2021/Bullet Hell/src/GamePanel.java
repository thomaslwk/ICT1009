import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
import java.util.Timer;
import java.util.TimerTask;

public class GamePanel extends JPanel implements Runnable{
	static final int GAME_WIDTH = 1200;
	static final int GAME_HEIGHT = 600;
	static final Dimension SCREEN_SIZE = new Dimension(GAME_WIDTH,GAME_HEIGHT);
	static final int BULLET_DIA = 20;
	static final int PLAYER_WIDTH = 25;
	static final int PLAYER_HEIGHT = 25;
	static final int DASHBOARD_HEIGHT = 50;
	Rectangle startButton = new Rectangle(500, 300, 200, 40);
	Rectangle quitButton = new Rectangle(500, 375, 200, 40);
	Thread gameThread;
	Image image;
	Graphics graphics;
	Random random;
	PlayerOne player1;
	PlayerTwo player2;
	MenuState menustate;
	Health health;
	//Time counter for wave count
	int timerctr = 1; 
	
	//Initialise State
	public static enum STATE {
		MENU, GAME
	};
	public static STATE State = STATE.MENU;
	
	//Initialise Sound 
	bgmcontroller bgm_menu, bgm_wave1, bgm_wave2;
	
	//Initialise Bullets
	NormalBullet[] normal = new NormalBullet[50];
	FastBullet[] fast = new FastBullet[50];
	StraightBullet[] straight = new StraightBullet[50];
	
	boolean gamestarted = false;
	private boolean pause = false;
	private difficulty difficulty;
	
	public GamePanel(){
		newPlayers();
		//Create Difficulty object for wave setting.
		difficulty = new difficulty();
		newBullet();
		this.setFocusable(true);
		this.addKeyListener(new AL());
		this.addMouseListener(new MouseHandler());
		this.addMouseMotionListener(new MouseHandler());
		this.setPreferredSize(SCREEN_SIZE);
		gameThread = new Thread(this);

		//Start Menu music after gamestart.
		bgm_menu = new bgmcontroller("Menu.wav"); 
		bgm_menu.start();
	}
	public void startGame(){
		gamestarted = true;
		gameThread.start();
		System.out.println(State);
		bgm_menu.stop();
		State = STATE.GAME;
	}

	public void newBullet() {
		//Set random y
		random = new Random();
		for (int i = 0; i < difficulty.getdifficulty(); i++){
			normal[i] = new NormalBullet(random.nextInt(GAME_WIDTH - BULLET_DIA),random.nextInt(GAME_HEIGHT - BULLET_DIA),BULLET_DIA,BULLET_DIA);
			fast[i] = new FastBullet(random.nextInt(GAME_WIDTH - BULLET_DIA),random.nextInt(GAME_HEIGHT - BULLET_DIA),BULLET_DIA,BULLET_DIA);
			straight[i] = new StraightBullet(random.nextInt(GAME_WIDTH - BULLET_DIA),random.nextInt(GAME_HEIGHT - BULLET_DIA),BULLET_DIA,BULLET_DIA);
		}
	}

	public void newPlayers() {
		//Set player stats
		player1 = new PlayerOne((GAME_WIDTH/3),(GAME_HEIGHT/2),PLAYER_WIDTH, PLAYER_HEIGHT,1);
		player2 = new PlayerTwo((GAME_WIDTH/3)*2,(GAME_HEIGHT/2), PLAYER_WIDTH,PLAYER_HEIGHT,2);
		health = new Health(GAME_WIDTH, DASHBOARD_HEIGHT);
		menustate = new MenuState(GAME_WIDTH,GAME_HEIGHT);
	}
	public void paint(Graphics g) {
		//Draw panel
		image = createImage(getWidth(),getHeight());
		graphics = image.getGraphics();
		draw(graphics);
		g.drawImage(image,0,0,this);
	}
	public void draw (Graphics g) {
		if(State == STATE.GAME) {
			player1.draw(g);
			player2.draw(g);
			for(int i = 0; i < difficulty.getdifficulty(); i++){
				normal[i].draw(g);
				fast[i].draw(g);
				straight[i].draw(g);
			}
			health.draw(g);
		}
		else if (State == STATE.MENU){
			menustate.draw(g);
		}
	}
	public void bgm_logic() {
		System.out.println("Difficulty: " + difficulty.getdifficulty());
		if(difficulty.getdifficulty() == 3) {
			bgm_wave1.stop();
			bgm_wave2 = new bgmcontroller();
			bgm_wave2.play("fast_game.wav");
		}
	}
	public void move() {
		//Call move methods
		player1.move();
		player2.move();
		for(int i = 0; i < difficulty.getdifficulty(); i++){
			normal[i].move();
			fast[i].move();
			straight[i].move();
		}
	}
	public void checkCollision() {
		//Check player collision with bullet
		for(int i=0; i < difficulty.getdifficulty(); i++){
			if(normal[i].intersects(player1)) {
				health.player1hp -= 5;
				System.out.println("player1:" + health.player1hp);
			}
			if(normal[i].intersects(player2)) {
				health.player2hp -= 5;
				System.out.println("player2:" + health.player2hp);
			}


			if(fast[i].intersects(player1)) {
				health.player1hp -= 5;
				System.out.println("player1:" + health.player1hp);
			}
			if(fast[i].intersects(player2)) {
				health.player2hp -= 5;
				System.out.println("player2:" + health.player2hp);
			}


			if(straight[i].intersects(player1)) {
				health.player1hp -= 5;
				System.out.println("player1:" + health.player1hp);
			}
			if(straight[i].intersects(player2)) {
				health.player2hp -= 5;
				System.out.println("player2:" + health.player2hp);
			}
		}

		//Health decrement for player 1. 
		if(health.player1hp < 1) {
			//Condition: if player 1 die
			newBullet();
			newPlayers();
		}

		//Health decrement for player 2. 
		if(health.player2hp < 1) {
			//Condition: if player 2 die
			newPlayers();
			newBullet();
		}
	}

	//Gameloop
	public void run() {
		long lastTime = System.nanoTime();
		double amountOfTicks = 60.0;
		double ns = 1000000000/amountOfTicks;
		double delta = 0;
		bgm_wave1 = new bgmcontroller();
		bgm_wave1.play("60_sec_version.wav");
		waveTimer();
		while(true) {
			long now = System.nanoTime();
			delta += (now - lastTime)/ns;
			lastTime = now;
			if(delta >= 1) {
				delta--;
				if(pause == false) {
					move();
					checkCollision();
					repaint();
				}
			}
		}
	}
	/* 
	 * WaveTimer Function to spawn more 
	 * bullets at given timing interval. 
	 */
	public void waveTimer() {
		//-- Timer to start wave.
		Timer timer = new Timer();
		TimerTask task = new TimerTask() {
			@Override
			public void run() {
				/* timerctr will increase by 1 each cycle 
				 * set limit to 5 for testing purpose.
				 */
				if(timerctr < 5) {
					timerctr++;
					difficulty.setdifficulty(timerctr);
					newBullet();
					bgm_logic();
					System.out.println("Inside Timer Task");
					System.out.println("Current state: " + State);
				}
			}
		};
		//--Testing purpose, timer has been set to 5 sec.
		timer.schedule(task, 5000, 5000);
	}

	//i don't understand this
	public class AL extends KeyAdapter{
		public void keyPressed(KeyEvent e) {
			player1.keyPressed(e);
			player2.keyPressed(e);
			if(e.getKeyCode()==KeyEvent.VK_P) {
				if(pause == false) {
					pause = true;
				}
				else {
					pause = false;
				}
			}
		}
		public void keyReleased(KeyEvent e) {
			player1.keyReleased(e);
			player2.keyReleased(e);
		}
	}
	public class MouseHandler extends MouseAdapter{
		public void mouseMoved(MouseEvent e){
			menustate.mouseMoved(e);
			repaint();
		}
		public void mouseClicked(MouseEvent e){
			int mx = e.getX();
			int my = e.getY();
			if (mx > startButton.x && mx < startButton.x + startButton.width && my > startButton.y && my < startButton.y + startButton.height) {
				startGame();
			}
			if (mx > quitButton.x && mx < quitButton.x + quitButton.width && my > quitButton.y && my < quitButton.y + quitButton.height) {
				System.exit(0);
			}
		}
	}

}
