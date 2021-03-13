
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class NormalBullet extends Bullet {
    
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
		setSpeed(6);
		int randomXDirection = random.nextInt(2);
		if(randomXDirection == 0) {
			randomXDirection--;
		}
		setXDirection(randomXDirection*getSpeed());
		
		int randomYDirection = random.nextInt(2);
		if(randomYDirection == 0) {
			randomYDirection--;
		}
		setYDirection(randomYDirection*getSpeed());
	}

    @Override
    public void setXDirection(int randomXDirection) {
		setXVelocity(randomXDirection);
	}

    @Override
	public void setYDirection(int randomYDirection) {
		setYVelocity(randomYDirection);
	}

	public void tick(){
		x += getXVelocity();
		y += getYVelocity();
		
		if(y <= 0 + GamePanel.DASHBOARD_HEIGHT) {
			setYDirection(-getYVelocity());
		}
		if(y >= GamePanel.GAME_HEIGHT - super.getBulletSize()) {
			setYDirection(-getYVelocity());
		}

		if(x <= 0) {
			setXDirection(-getXVelocity());
		}
		if(x >= GamePanel.GAME_WIDTH - super.getBulletSize()) {
			setXDirection(-getXVelocity());
		}
	}

    @Override
    public void draw(Graphics g) {

		g.setColor(Color.white);
		g.fillOval(x,y,height,width);
	}
} 
