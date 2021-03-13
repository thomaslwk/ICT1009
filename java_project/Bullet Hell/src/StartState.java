import java.awt.*;
import java.awt.event.KeyEvent;
import java.util.Random;
import java.util.Timer;
import java.util.TimerTask;

import javax.swing.ImageIcon;

public class StartState extends GameState{
	static final int PLAYER_WIDTH = 25;
	static final int PLAYER_HEIGHT = 25;
	static difficulty difficulty;
	private PlayerOne playerone;
	private PlayerTwo playertwo;

	private Health health;

	private Counter counter;
	private int x;
	private int diff;
	private int i;
	
	private Random random;
	private boolean gameover = false;
	
	private Image background;
	
	public StartState(GameStateManager gsm) {
		super(gsm);
	}


	public void clockTimer() {

		Timer timer = new Timer();
		TimerTask task = new TimerTask() {

			@Override
			public void run() {
				if (gameover) { 		//If any of gameover conditions is true, kill timer and push state to endstate
					timer.cancel();
					timer.purge();
					gsm.states.push(new EndState(gsm));
				}

				x = counter.getCounter();						//Get Current Time
				diff = (60-x)/10;								//Integer of difficulty set according to time

				if (x % 10 == 1 && x>2) {						//When timer reaches (X1:51,41,31 etc) and more than 2 seconds
					difficulty.setdifficulty(diff+2);			//Sets new difficulty.
					newBullet();                              	//Creates new bullet object base on difficulty.
					bgm_logic();								//Change Music at wave 3
				}

				if (!GamePanel.isPause()) {						//When Running
					x--;										//Decrease Time
					String y = String.valueOf(x);				//Convert Current Time to string
					counter.setCounter(y);						//SetCounter
					if (x == 0) {
						if (health.player1hp < health.player2hp) {
							//Condition: if player 1 die
							gameover = true;
							GamePanel.WIN = 2;
						}
						//Health decrement for player 2.
						else if(health.player2hp < health.player1hp) {
							//Condition: if player 2 die
							gameover = true;
							GamePanel.WIN = 1;
						}
						else {
							gameover = true;
							GamePanel.WIN = 3;
						}
					}
				} else if (GamePanel.isPause()) {
					String y = String.valueOf(x);
					counter.setCounter(y);
				}
			}
		};
		timer.schedule(task, 1000, 1000);			//Per Second
	}
	
	public void init() {
		difficulty = new difficulty();
		i=difficulty.getdifficulty()-2;
		random = new Random();
		counter = new Counter();
		newPlayers();
		newBullet();
		clockTimer();
		System.out.println("Difficulty: " + difficulty.getdifficulty());
		GamePanel.bgm_wave1.start();		//Starts first music Clip of the game
	}
	public void bgm_logic() {				//Checks current difficulty setting and play sound.
		System.out.println("Difficulty: " + difficulty.getdifficulty());
		if(difficulty.getdifficulty() == 4) {
			GamePanel.bgm_wave1.stop();		//Stops first music clip of the game
			GamePanel.bgm_wave2.start();	//Starts second music clip of the game
		}
	}

	public void newBullet() {
		//Set random y
		random = new Random();
		i++;
		GamePanel.normal[i] = new NormalBullet(random.nextInt(GamePanel.GAME_WIDTH - Bullet.bulletSize),random.nextInt(GamePanel.GAME_HEIGHT - Bullet.bulletSize),Bullet.bulletSize,Bullet.bulletSize);
		GamePanel.fast[i] = new FastBullet(random.nextInt(GamePanel.GAME_WIDTH - Bullet.bulletSize),random.nextInt(GamePanel.GAME_HEIGHT - Bullet.bulletSize),Bullet.bulletSize,Bullet.bulletSize);
		GamePanel.straight[i] = new StraightBullet(random.nextInt(GamePanel.GAME_WIDTH - Bullet.bulletSize),random.nextInt(GamePanel.GAME_HEIGHT - Bullet.bulletSize),Bullet.bulletSize,Bullet.bulletSize);
	}
	public void newPlayers() {
		//Set player stats
		playerone = new PlayerOne((GamePanel.GAME_WIDTH/3),(GamePanel.GAME_HEIGHT/2),PLAYER_WIDTH, PLAYER_HEIGHT);
		playertwo = new PlayerTwo((GamePanel.GAME_WIDTH/3)*2,(GamePanel.GAME_HEIGHT/2), PLAYER_WIDTH,PLAYER_HEIGHT);
		health = new Health();
		counter = new Counter();
	}
	
	public void checkCollision() {
		//Check player collision with bullet
		for(int i=0; i < difficulty.getdifficulty(); i++){
			if(GamePanel.normal[i].intersects(playerone)) {
				health.player1hp -= 5;
			}
			if(GamePanel.normal[i].intersects(playertwo)) {
				health.player2hp -= 5;
			}

			if(GamePanel.fast[i].intersects(playerone)) {
				health.player1hp -= 5;
			}
			if(GamePanel.fast[i].intersects(playertwo)) {
				health.player2hp -= 5;
			}
			if(GamePanel.straight[i].intersects(playerone)) {
				health.player1hp -= 5;
			}
			if(GamePanel.straight[i].intersects(playertwo)) {
				health.player2hp -= 5;
			}
		}
		
		if(health.player1hp < 0) {			//When Player 1 dies
			gameover = true;
			GamePanel.WIN = 2;
		}
		
		if(health.player2hp < 0) {			//When Player 2 dies
			gameover = true;
			GamePanel.WIN = 1;
		}
		
	}

	public void tick() {
		playerone.tick();
		playertwo.tick();
		for (int i = 0; i < difficulty.getdifficulty(); i++) {
			GamePanel.normal[i].tick();
			GamePanel.fast[i].tick();
			GamePanel.straight[i].tick();
		}
		checkCollision();

	}
	
	public void draw(Graphics g) {
		ImageIcon image = new ImageIcon ("Bullet Hell/resources/images/background.png");
		background = image.getImage();
		g.drawImage(background,0, 0, null);
		//g.setColor(Color.black);
		//g.fillRect(0,0,GamePanel.GAME_WIDTH, GamePanel.GAME_HEIGHT);
		playerone.draw(g);	
		playertwo.draw(g);
		for (int i = 0; i < difficulty.getdifficulty(); i++) {
			GamePanel.normal[i].draw(g);
			GamePanel.fast[i].draw(g);
			GamePanel.straight[i].draw(g);
		}
		health.draw(g);
		counter.draw(g);
	}

	public void keyPressed(int k) {
		playerone.keyPressed(k);
		playertwo.keyPressed(k);
		if(k == KeyEvent.VK_P) {
			if(GamePanel.isPause()){ 					// STARTS music if key P is pressed, when paused
				if(difficulty.getdifficulty()>=3){
					GamePanel.bgm_wave2.start();
				} else{
					GamePanel.bgm_wave1.start();
				}
			}
			if(!GamePanel.isPause()){ 					// PAUSES music if key P is pressed, when running
				if(difficulty.getdifficulty()>=3){
					GamePanel.bgm_wave2.pause();
				} else{
					GamePanel.bgm_wave1.pause();
				}
			}
			GamePanel.setPause(!GamePanel.isPause());	//Toggle Pause
		}
	}

	public void keyReleased(int k) {
		playerone.keyReleased(k);
		playertwo.keyReleased(k);
	}
	
}
