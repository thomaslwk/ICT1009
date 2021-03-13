import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
public class Counter extends Rectangle {

	String counter = "60";
	
	
	public Counter() {
		
	}
	public void draw(Graphics g) {
		g.setColor(Color.white);
		g.setFont(new Font("Arial", Font.BOLD, 50));
		g.drawString(counter, (GamePanel.GAME_WIDTH/2) - 25, 50);
	}
	
	public int getCounter() {
		int x = Integer.valueOf(counter);
		return x;
	}
	
	public void setCounter(String counter) {
		this.counter = counter;
	}
}
