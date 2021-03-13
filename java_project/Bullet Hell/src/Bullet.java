import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

//abstract methods:
//setXD, draw

public abstract class Bullet extends Rectangle {
    
    private int xVelocity;
	private int yVelocity;
	private int baseSpeed;
	static int bulletSize = 20;
	
	
	Bullet(int x, int y) {
		super(x,y);
	}
	
	Bullet(int x, int y, int width, int height) {
		super(x, y, width, height);
		if (super.y <= 50){
			this.y = 51;
		}
		//random start direction
		Random random = new Random();
		int randomXDirection = random.nextInt(2);
		if(randomXDirection == 0) {
			randomXDirection--;
		}
		setXDirection(randomXDirection*baseSpeed);
		
		int randomYDirection = random.nextInt(2);
		if(randomYDirection == 0) {
			randomYDirection--;
		}
		setYDirection(randomYDirection*baseSpeed);
	}

	public void tick() {
		x += getXVelocity();
		y += getYVelocity();
		
		if(y <= 0 + GamePanel.DASHBOARD_HEIGHT) {
			setYDirection(-getYVelocity());
		}
		if(y >= GamePanel.GAME_HEIGHT - bulletSize) {
			setYDirection(-getYVelocity());
		}

		if(x <= 0) {
			setXDirection(-getXVelocity());
		}
		if(x >= GamePanel.GAME_WIDTH - bulletSize) {
			setXDirection(-getXVelocity());
		}
	}
	//Abstract needed
	public abstract void draw(Graphics g);
	public abstract void setXDirection(int randomXDirection);

	public void setYDirection(int randomYDirection) {
		setYVelocity(randomYDirection);
	}

	//Setters and getters
	public void setXVelocity(int x){
		this.xVelocity = x;
	}
	public int getXVelocity() {
		return xVelocity;
	}
	public void setYVelocity(int y){
		this.yVelocity = y;
	}
	public int getYVelocity() {
		return yVelocity;
	}
	public void setSpeed(int s) {
		this.baseSpeed = s;
	}
	public int getSpeed() {
		return baseSpeed;
	}
	public int getBulletSize() {
		return bulletSize;
	}
}
