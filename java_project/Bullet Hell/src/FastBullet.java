import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class FastBullet extends Bullet {
	
	public FastBullet(int x, int y, int width, int height) {
		super(x, y, width, height);
		//random start direction
		if (super.y<=50){
			this.y=51;
		}
		Random random = new Random();
		int randomXDirection = random.nextInt(2);
		setSpeed(10);
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
    //Abstracted
	@Override
	public void setXDirection(int randomXDirection) {
		setXVelocity(randomXDirection);
	}

	@Override
	public void setYDirection(int randomYDirection) {
		setYVelocity(randomYDirection);
	}

	public void tick() {
		x += getXVelocity();
		y += getYVelocity();
		
		if(y <= 0 + GamePanel.DASHBOARD_HEIGHT) {
			setYDirection(-getYVelocity());
		}
		if(y >= GamePanel.GAME_HEIGHT - getBulletSize()) {
			setYDirection(-getYVelocity());
		}

		if(x <= 0) {
			setXDirection(-getXVelocity());
		}
		if(x >= GamePanel.GAME_WIDTH - getBulletSize()) {
			setXDirection(-getXVelocity());
		}
	}
	//Abstracted
	@Override
	public void draw(Graphics g) {
		g.setColor(Color.cyan);
		g.fillOval(x,y,height,width);
	}
}

 	