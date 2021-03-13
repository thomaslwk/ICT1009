import java.awt.*;
import java.awt.event.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.util.*;

import javax.imageio.ImageIO;
import javax.swing.*;
public class FastBullet extends Bullet {

    //private int xVelocity;
	//private int yVelocity;
	int baseSpeed = 10;
	
	public FastBullet(int x, int y, int width, int height) {
		super(x, y, width, height);
		//random start direction
		if (super.y<=50){
			this.y=51;
		}
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
    
    //Abstracted
	@Override
	public void setXDirection(int randomXDirection) {
		setXVelocity(randomXDirection);
	}

	@Override
	public void setYDirection(int randomYDirection) {
		setYVelocity(randomYDirection);
	}

    //Abstracted
	@Override
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
		g.setColor(Color.cyan);
		g.fillOval(x,y,height,width);
	}
//	public void draw(Graphics g) {
//		g.setColor(Color.cyan);
////		BufferedImage img = null;
//		try {
//			BufferedImage img = ImageIO.read(new File("resources/images/ghost.png"));
//			g.drawImage(img, x,y,height,width, null);
//		}
//		catch(IOException e) {
//			System.err.println(e);
//		}
//	}
}

