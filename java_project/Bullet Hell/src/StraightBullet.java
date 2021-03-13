import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class StraightBullet extends Bullet{

	public StraightBullet(int x, int y, int width, int height) {
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
	}
	//Abstracted
	@Override
	public void setXDirection(int randomXDirection) {
		setXVelocity(randomXDirection);
	}

	//Polymorphism implementation (Override)
	@Override
	public void tick() {
		x += getXVelocity();
		
		if(x <= 0) {
			setXDirection(-getXVelocity());
		}
		if(x >= GamePanel.GAME_WIDTH - super.getBulletSize()) {
			setXDirection(-getXVelocity());
		}
	}
	//Abstracted
	@Override
	public void draw(Graphics g) {
		g.setColor(Color.green);
		g.fillOval(x,y,height,width);
	}
}

