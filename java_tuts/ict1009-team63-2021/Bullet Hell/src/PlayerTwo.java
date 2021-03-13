import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
public class PlayerTwo extends Player{
	
	public PlayerTwo(int x, int y, int PLAYER_WIDTH, int PLAYER_HEIGHT, int id) {
		super(x, y, PLAYER_WIDTH, PLAYER_HEIGHT, id);
		// TODO Auto-generated constructor stub
	}

	public void keyPressed(KeyEvent e) {
		if(e.getKeyCode()==KeyEvent.VK_UP) {
			setYDirection(-super.getSpeed());
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_DOWN) {
			setYDirection(super.getSpeed());
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_LEFT) {
			setXDirection(-super.getSpeed());
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_RIGHT) {
			setXDirection(super.getSpeed());
			move();
		}
	}
	
	public void keyReleased(KeyEvent e) {
		if(e.getKeyCode()==KeyEvent.VK_UP) {
			setYDirection(0);
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_DOWN) {
			setYDirection(0);
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_LEFT) {
			setXDirection(0);
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_RIGHT) {
			setXDirection(0);
			move();
		}
	}
	
	public void draw(Graphics g) {
		g.setColor(Color.red);
		g.fillRect(x, y, width, height);
	}
}
