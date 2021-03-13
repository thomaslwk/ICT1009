import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JPanel;

public class GamePanel extends JPanel implements Runnable,KeyListener {
	//screen settings
	static final int GAME_WIDTH = 1200;
	static final int GAME_HEIGHT = 600;
	static final Dimension SCREEN_SIZE = new Dimension(GAME_WIDTH,GAME_HEIGHT);
	static final int DASHBOARD_HEIGHT = 50;
	static int WIN = 0;
	static NormalBullet[] normal = new NormalBullet[10];
	static FastBullet[] fast = new FastBullet[10];
	static StraightBullet[] straight = new StraightBullet[10];
	static bgmcontroller bgm_wave1, bgm_wave2, bgm_menu, bgm_end;
	//static final int BULLET_DIA = 20;
	//static final int PLAYER_WIDTH = 25;
	//static final int PLAYER_HEIGHT = 25;
	//static final int DASHBOARD_HEIGHT = 50;
	
	private Thread thread;
	private boolean isRunning = false;
	private static boolean pause = false;
	
	private int fps = 60;
	private long targetTime = 1000/fps;
	
	private GameStateManager gsm;
	
	public static boolean isPause() {
		return pause;
	}

	public static void setPause(boolean x) {
		pause = x;
	}
	
	public GamePanel() {
		setPreferredSize(SCREEN_SIZE);
		
		addKeyListener(this);
		setFocusable(true);

		bgm_menu = new bgmcontroller("Menu.wav");				//Populate bgmcontroller instances
		bgm_end = new bgmcontroller("victory.wav");			//Populate bgmcontroller instances
		bgm_wave2 = new bgmcontroller("fast_game.wav");		//Populate bgmcontroller instances
		bgm_wave1 = new bgmcontroller("normal_game.wav");		//Populate bgmcontroller instances
		start();
	}
	
	public void start() {
		isRunning = true;
		thread = new Thread(this);
		thread.start();
	}
	
	public void run() {
		long start, elapsed, wait;
		
		gsm = new GameStateManager();
		
		while(isRunning) {
			start = System.nanoTime();
			
			tick();
			repaint();
			
			elapsed = System.nanoTime() - start;
			wait = targetTime - elapsed/1000000;
			
			if(wait <= 0) {
				wait = 5;
			}
			
			try {
				Thread.sleep(wait);
			} catch(Exception e) {
				e.printStackTrace();
			}
			while(isPause()) {
				try {
					Thread.sleep(10);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}



		}
	}
	
	public void tick() {
		gsm.tick();
	}
	
	
	//public void checkCollision() {
		//gsm.checkCollision();
	//}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		g.clearRect(0, 0, GAME_WIDTH, GAME_HEIGHT);
		gsm.draw(g);
	}

	public void keyPressed(KeyEvent e) {
		
		gsm.keyPressed(e.getKeyCode());
	}

	public void keyReleased(KeyEvent e) {
		
		gsm.keyReleased(e.getKeyCode());
	}

	public void keyTyped(KeyEvent e) {
		
	}
}
