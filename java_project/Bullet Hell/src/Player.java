import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public abstract class Player extends Rectangle {
	
	private int yVelocity;
	private int xVelocity;
	private int speed = 10;
	
	public Player(int x, int y, int width, int height) {
		super(x,y,width,height);
	}
	
	public void setYDirection(int yDirection) {
		yVelocity = yDirection;
	}
	public void setXDirection(int xDirection) {
		xVelocity = xDirection;
	}

	public void tick() {
		y = y + yVelocity;
		x = x + xVelocity;

		if(y<=0 + GamePanel.DASHBOARD_HEIGHT) {
			y = 0 + GamePanel.DASHBOARD_HEIGHT;
		}
		if(y >=(GamePanel.GAME_HEIGHT-25)) {
			y = GamePanel.GAME_HEIGHT - 25;
		}
		if(x<=0) {
			x = 0;
		}
		if(x >=(GamePanel.GAME_WIDTH-25)) {
			x = GamePanel.GAME_WIDTH - 25;
		}
	}
	
	public int getSpeed() {
		return speed;
	}
	
	public abstract void draw(Graphics g);
	public abstract void keyPressed(int k);
	public abstract void keyReleased(int k);
}
