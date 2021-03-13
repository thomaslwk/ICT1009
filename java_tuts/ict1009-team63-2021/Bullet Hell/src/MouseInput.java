import java.awt.Rectangle;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class MouseInput implements MouseListener{

	@Override
	public void mouseClicked(MouseEvent e) {
		// TODO Auto-generated method stub
	}

	public void mousePressed(MouseEvent e) {
		int mx = e.getX();
		int my = e.getY();
		
		/*
		 public Rectangle startButton = new Rectangle(GamePanel.GAME_WIDTH/2 - 100, 300, 200, 40);
    	 public Rectangle helpButton = new Rectangle(GamePanel.GAME_WIDTH/2 - 100, 375, 200, 40);
    	 public Rectangle quitButton = new Rectangle(GamePanel.GAME_WIDTH/2 - 100, 450, 200, 40);
		 */
		//Play Button
		if(mx >= GamePanel.GAME_WIDTH/2 - 100 && mx <= GamePanel.GAME_WIDTH/2 - 100 + 300) {
			if(my >= 300 && my <= 340) {
				//pressed play button 
				GamePanel.State = GamePanel.STATE.GAME;
				System.out.println("Clicked");
			}
		}
		
		 /*if (mx >= MenuState.startButton.x && mx <= MenuState.startButton.x + MenuState.startButton.width && my >=  MenuState.startButton.y && my <=  MenuState.startButton.x +  MenuState.startButton.height) {
			 //GamePanel.State = GamePanel.STATE.GAME;
			 System.out.println("Clicked");
		 }*/
	}
		

	@Override
	public void mouseReleased(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseEntered(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseExited(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

}
