import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.event.KeyEvent;

public class MenuState extends GameState {
	
	private String[] options = {"Start Game", "Exit Game"};
	private int currentSelection = 0;
	
	
	public MenuState(GameStateManager gsm) {
		super(gsm);
	}

	public void init() {
		GamePanel.bgm_menu.start();
	}		//Start Music

	public void tick() {
		
	}

	public void draw(Graphics g) {
		// Background of Game Panel
		g.setColor(Color.black);
		g.fillRect(0, 0, GamePanel.GAME_WIDTH, GamePanel.GAME_HEIGHT);
	    // Game Title
		g.setFont(new Font("Arial", Font.ITALIC, 80));
		g.setColor(Color.RED);
        g.drawString("Bullet Hell", 400, 150);
        // Instructions of Game 
        g.setFont(new Font("Monospaced",Font.PLAIN, 20));
	   	g.setColor(Color.WHITE);
	   	
	   	g.drawString("Up & Down Keys to Navigate", 420, 220);
	 	g.drawString("Enter to Select", 480, 260);
	 	
		for(int i = 0; i < options.length; i++) {
			g.setFont(new Font("Arial", Font.BOLD, 25));
			if(i == currentSelection) {
				g.setColor(Color.BLUE);
			} 
			else {
				g.setColor(Color.BLACK);
			}
			if(i == 0) {
				g.fillRect(480, 320 + i * 60, 200, 40);
				g.setColor(Color.WHITE);
				g.drawRect(480, 320 + i * 60, 200, 40);
				g.setColor(Color.WHITE);
				g.drawString(options[i], 515, 350 + i * 60);
			}if(i == 1) {
				g.fillRect(480, 320 + i * 60, 200, 40);
				g.setColor(Color.WHITE);
				g.drawRect(480, 320 + i * 60, 200, 40);
				g.setColor(Color.WHITE);
				g.drawString(options[i], 520 , 350 + i * 60);
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
				GamePanel.bgm_menu.stop();
				//change to help state game
				gsm.states.push(new HelpState(gsm));
			}
			else if(currentSelection == 1) {
				System.exit(0);
			}
		}
	}

	public void keyReleased(int k) {
		
		
	}
}
