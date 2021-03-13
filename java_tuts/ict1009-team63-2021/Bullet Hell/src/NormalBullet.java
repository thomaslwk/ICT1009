
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class NormalBullet extends Bullet {
    
    //private int xVelocity;
	//private int yVelocity;
	private int baseSpeed = 6;
	
	NormalBullet(int x, int y) {
		super(x,y);
	}
	
	NormalBullet(int x, int y, int width, int height) {
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

    @Override
    public void setXDirection(int randomXDirection) {
		setXVelocity(randomXDirection);
	}

    @Override
	public void setYDirection(int randomYDirection) {
		setYVelocity(randomYDirection);
	}

    @Override
     //Abstract needed
	public void move() {
		x += getXVelocity();
		y += getYVelocity();
		
		if(y <= GamePanel.DASHBOARD_HEIGHT) {
			setYDirection(-getYVelocity());
		}
		if(y >= GamePanel.GAME_HEIGHT - GamePanel.BULLET_DIA) {
			setYDirection(-getYVelocity());
		}

		if(x <= 0) {
			setXDirection(-getXVelocity());
		}
		if(x >= GamePanel.GAME_WIDTH - GamePanel.BULLET_DIA) {
			setXDirection(-getXVelocity());
		}
	}

    @Override
    public void draw(Graphics g) {
		g.setColor(Color.white);
		g.fillOval(x,y,height,width);
	}
} 