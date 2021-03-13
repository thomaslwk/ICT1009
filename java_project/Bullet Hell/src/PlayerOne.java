import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class PlayerOne extends Player {
	
	private Image player1;
	
	public PlayerOne(int x, int y, int width, int height) {
		super(x,y,width,height);
	}

	public void draw(Graphics g) {
		ImageIcon image = new ImageIcon ("Bullet Hell/resources/images/player1.png");
		player1 = image.getImage();
		g.drawImage(player1,x, y, null);
		//g.setColor(Color.blue);
		//g.fillRect(x, y, width, height);
	}
	
	public void keyPressed(int k) {
		if(k==KeyEvent.VK_W) {
			setYDirection(-super.getSpeed());
			tick();
		}
		if(k==KeyEvent.VK_S) {
			setYDirection(super.getSpeed());
			tick();
		}
		if(k==KeyEvent.VK_A) {
			setXDirection(-super.getSpeed());
			tick();
		}
		if(k==KeyEvent.VK_D) {
			setXDirection(super.getSpeed());
			tick();
		}
	}
	public void keyReleased(int k) {
		if(k==KeyEvent.VK_W) {
			setYDirection(0);
			tick();
		}
		if(k==KeyEvent.VK_S) {
			setYDirection(0);
			tick();
		}
		if(k==KeyEvent.VK_A) {
			setXDirection(0);
			tick();
		}
		if(k==KeyEvent.VK_D) {
			setXDirection(0);
			tick();
		}
	}
}
