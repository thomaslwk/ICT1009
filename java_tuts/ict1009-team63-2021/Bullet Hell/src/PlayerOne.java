import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
public class PlayerOne extends Player{
	
	public PlayerOne(int x, int y, int PLAYER_WIDTH, int PLAYER_HEIGHT, int id) {
		super(x, y, PLAYER_WIDTH, PLAYER_HEIGHT, id);
		// TODO Auto-generated constructor stub
	}

	public void keyPressed(KeyEvent e) {
		if(e.getKeyCode()==KeyEvent.VK_W) {
			setYDirection(-super.getSpeed());
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_S) {
			setYDirection(super.getSpeed());
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_A) {
			setXDirection(-super.getSpeed());
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_D) {
			setXDirection(super.getSpeed());
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_D) {
			setXDirection(super.getSpeed());
			move();
		}
	}
	public void keyReleased(KeyEvent e) {
		if(e.getKeyCode()==KeyEvent.VK_W) {
			setYDirection(0);
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_S) {
			setYDirection(0);
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_A) {
			setXDirection(0);
			move();
		}
		if(e.getKeyCode()==KeyEvent.VK_D) {
			setXDirection(0);
			move();
		}
	}
	
	public void draw(Graphics g) {
		g.setColor(Color.blue);
		g.fillRect(x, y, width, height);
	}
}
