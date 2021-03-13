import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class PlayerTwo extends Player {
	
	private Image player2;
	
	public PlayerTwo(int x, int y, int width, int height) {
		super(x,y,width,height);
	}
	
	public void draw(Graphics g) {
		ImageIcon image = new ImageIcon ("Bullet Hell/resources/images/player2.png");
		player2 = image.getImage();
		g.drawImage(player2,x, y, null);
		//g.setColor(Color.yellow);
		//g.fillRect(x, y, width, height);
	}
	
	public void keyPressed(int k) {
		if(k==KeyEvent.VK_UP) {
			setYDirection(-super.getSpeed());
			tick();
		}
		if(k==KeyEvent.VK_DOWN) {
			setYDirection(super.getSpeed());
			tick();
		}
		if(k==KeyEvent.VK_LEFT) {
			setXDirection(-super.getSpeed());
			tick();
		}
		if(k==KeyEvent.VK_RIGHT) {
			setXDirection(super.getSpeed());
			tick();
		}
	}
	public void keyReleased(int k) {
		if(k==KeyEvent.VK_UP) {
			setYDirection(0);
			tick();
		}
		if(k==KeyEvent.VK_DOWN) {
			setYDirection(0);
			tick();
		}
		if(k==KeyEvent.VK_LEFT) {
			setXDirection(0);
			tick();
		}
		if(k==KeyEvent.VK_RIGHT) {
			setXDirection(0);
			tick();
		}
	}
}
