import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.KeyEvent;
import java.awt.image.BufferedImage;
import java.io.File;

import javax.imageio.ImageIO;
import javax.swing.ImageIcon;


public class HelpState extends GameState{
	
	private String[] options = {"Let's Start!"};
	private int currentSelection = 0;
	private Image arrowKeyBoard;
	private Image wasdKeyBoard;
	private Image p1;
	private Image p2;
	
	public HelpState(GameStateManager gsm) {
		super(gsm);
	}
	
	public void init() {
		GamePanel.bgm_menu.start();
	}
	
	public void tick() {
		
	}
	
	public void draw(Graphics g) {
		//Background of Game Panel
		g.setColor(Color.black);
		g.fillRect(0, 0, GamePanel.GAME_WIDTH, GamePanel.GAME_HEIGHT);
	    //Instructions of Game
		g.setFont(new Font("Monospaced",Font.BOLD, 50));
	   	g.setColor(Color.WHITE);
	   	g.drawString("Instructions of Bullet Hell", 130, 70);
	   	g.setFont(new Font("Monospaced",Font.PLAIN, 20));
	   	g.drawString("1. Each player has its own character. ", 130, 110);
	   	g.drawString("Player 1: ", 165, 140);

		//Load Image of players
		ImageIcon p1Image = new ImageIcon("Bullet Hell/resources/images/player1.png");
		p1 = p1Image.getImage();
		g.drawImage(p1, 275, 120, null);
		ImageIcon p2Image = new ImageIcon("Bullet Hell/resources/images/player2.png");
		p2 = p2Image.getImage();
		g.drawImage(p2, 275, 150, null);

		g.setColor(Color.WHITE);
	   	g.drawString("Player 2: ", 165, 170);
	   	g.drawString("3. Avoid colliding with the balls on the screen using the respective controls given.",130, 230);
	   	g.drawString("5. Every 10 seconds, the balls will increase their speed and more balls are spawned.", 130, 290);
	   	g.drawString("2. Every Player has a health bar located at the top of the screen.", 130, 200);
	   	g.drawString("4. When a player collides with the ball, player health decrease.", 130, 260);
	   	g.drawString("6. Game time is 60 seconds.", 130, 320);
	   	g.drawString("** Press P to Pause the Game", 370, 550);
	   	g.drawString("** Press Enter to Start", 370, 580);
	   	g.drawString("Player 1", 215, 500);
	   	g.drawString("Player 2", 815, 500);
	   	g.setFont(new Font("Monospaced",Font.ITALIC, 40));
	   	g.drawString("MAY THE BEST PLAYER WIN!", 130, 370);
	   	
	   	//Load image of keyboards
		ImageIcon image = new ImageIcon ("Bullet Hell/resources/images/wasd keyboards.png");
		arrowKeyBoard = image.getImage();
		g.drawImage(arrowKeyBoard, 200, 400, null);
		
		ImageIcon image1 = new ImageIcon("Bullet Hell/resources/images/Arrow Keyboard.png");
		wasdKeyBoard = image1.getImage();
		g.drawImage(wasdKeyBoard, 800, 400, null);
	   	
	   	//Draw Start button
		for(int i = 0; i < options.length; i++) {
			g.setFont(new Font("Arial", Font.BOLD, 25));
			if(i == currentSelection) {
				g.setColor(Color.BLUE);
			}
			if(i == 0) {
				g.fillRect(940, 540, 200, 40);
				g.setColor(Color.WHITE);
				g.drawRect(940, 540, 200, 40);
				g.setColor(Color.WHITE);
				g.drawString(options[i], 980, 568);
			}
			
		}
	}

	
	public void keyPressed(int k) {
		if(k == KeyEvent.VK_ENTER) {
			if(currentSelection == 0) {
				GamePanel.bgm_menu.stop();
				//change to start game
				gsm.states.push(new StartState(gsm));
			}
		}
	}

	
	public void keyReleased(int k) {
		
	}
	
}
