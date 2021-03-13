import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
public abstract class Player extends Rectangle {
	
	private int id;
	private int yVelocity;
	private int xVelocity;
	private int speed = 10;
	
	
	public Player(int x, int y, int PLAYER_WIDTH, int PLAYER_HEIGHT, int id) {
		super(x,y,PLAYER_WIDTH,PLAYER_HEIGHT);
		this.id = id;
	}

	public void setYDirection(int yDirection) {
		yVelocity = yDirection;
	}
	public void setXDirection(int xDirection) {
		xVelocity = xDirection;
	}
	public void move() {
		y = y + yVelocity;
		x = x + xVelocity;
		
		if(y<=GamePanel.DASHBOARD_HEIGHT) {
			y = GamePanel.DASHBOARD_HEIGHT;
		}
		if(y >=(GamePanel.GAME_HEIGHT-GamePanel.PLAYER_HEIGHT)) {
			y = GamePanel.GAME_HEIGHT - GamePanel.PLAYER_HEIGHT;
		}
		if(x<=0) {
			x = 0;
		}
		if(x >=(GamePanel.GAME_WIDTH-GamePanel.PLAYER_WIDTH)) {
			x = GamePanel.GAME_WIDTH - GamePanel.PLAYER_WIDTH;
		}
	}
	
	public int getSpeed() {
		return speed;
	}
	
	public abstract void keyPressed(KeyEvent e);
	public abstract void keyReleased(KeyEvent e);
	public abstract void draw(Graphics g);
}
