import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.KeyEvent;

import javax.swing.ImageIcon;

public class EndState extends GameState {
	
	private String[] options = {"Restart Game", "Exit Game"};
	private int currentSelection = 0;
	private Image victory;
	private Image crown;
	
	public EndState(GameStateManager gsm) {
		super(gsm);
	}

	public void init() {
		if (StartState.difficulty.getdifficulty() >=3){
			GamePanel.bgm_wave2.stop();
		} else{
			GamePanel.bgm_wave1.stop();
		}
		GamePanel.bgm_end.start();
	}

	public void tick() {
		
	}

	public void draw(Graphics g) {
		g.setColor(Color.black);
		g.fillRect(0, 0, GamePanel.GAME_WIDTH, GamePanel.GAME_HEIGHT);
		g.setColor(Color.red);
		//get image of victory
		ImageIcon image = new ImageIcon("Bullet Hell/resources/images/victory.png");
	    victory = image.getImage();
	    //get image of crown
	    ImageIcon image1 = new ImageIcon("Bullet Hell/resources/images/crown.png");
	    crown = image1.getImage();
		if(GamePanel.WIN == 1) {
			
			 g.setFont(new Font("Arial", Font.BOLD, 60));
		     g.setColor(Color.YELLOW);
		     g.drawString("Victory!", 500, 200);
		     g.setFont(new Font("Arial", Font.BOLD, 50));
		     g.setColor(Color.WHITE);
		     g.drawString("Player 1 Wins!", 440, 300);
		     g.drawImage(victory, 720, 145, null);
		     g.drawImage(crown, 440, 233, null);
		     
		}
		else if(GamePanel.WIN == 2) {
			
			 g.setFont(new Font("Arial", Font.BOLD, 60));
		     g.setColor(Color.YELLOW);
		     g.drawString("Victory!", 500, 200);
		     g.setFont(new Font("Arial", Font.BOLD, 50));
		     g.setColor(Color.WHITE);
		     g.drawString("Player 2 Wins!", 440, 300);
		     g.drawImage(victory, 720, 145, null);
		     g.drawImage(crown, 440, 233, null);
		}
		else {
			 g.setFont(new Font("Arial", Font.BOLD, 60));
		     g.setColor(Color.YELLOW);
		     g.drawString("Draw!", 500, 200);
		     g.setFont(new Font("Arial", Font.BOLD, 50));
		     g.setColor(Color.WHITE);
		}
	     
	     for(int i = 0; i < options.length; i++) {
			g.setFont(new Font("Arial", Font.BOLD, 25));
			if(i == currentSelection) {
				g.setColor(Color.BLUE);
			} 
			else {
				g.setColor(Color.BLACK);
			}
			if(i == 0) {
				g.fillRect(500, 370 + i * 60, 200, 40);
				g.setColor(Color.WHITE);
				g.drawRect(500, 370 + i * 60, 200, 40);
				g.setColor(Color.WHITE);
				g.drawString(options[i], 522, 397 + i * 60);
			}if(i == 1){
				g.fillRect(500, 370 + i * 60, 200, 40);
				g.setColor(Color.WHITE);
				g.drawRect(500, 370 + i * 60, 200, 40);
				g.setColor(Color.WHITE);
				g.drawString(options[i], 545 , 397 + i * 60);
			}
		}
		
	}
	
	
	public void keyPressed(int k) {
		if(k == KeyEvent.VK_DOWN) {
			currentSelection++;
			if(currentSelection >= options.length) {
				currentSelection = 0;
			}
		}
		
		if(k == KeyEvent.VK_UP) {
			currentSelection--;
			if(currentSelection < 0) {
				currentSelection = options.length - 1;
			}
		}
		if(k == KeyEvent.VK_ENTER) {
			if(currentSelection == 0) {
				GamePanel.bgm_end.stop();
				//change to start game
				gsm.states.push(new StartState(gsm));
			}
			else if(currentSelection == 1) {
				System.exit(0);
			}
		}
	}

	public void keyReleased(int k) {
		
	}
}
