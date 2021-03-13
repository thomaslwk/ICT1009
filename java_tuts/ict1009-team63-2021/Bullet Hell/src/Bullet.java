
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;


//abstract methods:
//setXD
//move
public abstract class Bullet extends Rectangle {
    
    private int xVelocity;
	private int yVelocity;
	private int baseSpeed;
	
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

	//Abstract needed
    public abstract void setXDirection(int randomXDirection);

	public void setYDirection(int randomYDirection) {
		setYVelocity(randomYDirection);
	}

	//Abstract needed
	public abstract void move();
	public abstract void draw(Graphics g);
	
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
	public int getSpeed() {
		return baseSpeed;
	}
}
