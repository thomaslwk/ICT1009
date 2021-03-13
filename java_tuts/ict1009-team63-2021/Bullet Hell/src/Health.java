import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
public class Health extends Rectangle {
	static int GAME_WIDTH;
	
	int player1;
	int player2;
	int DASHBOARD_HEIGHT;
	
	int player1hp = 500;
	int player2hp = 500;
	
	public Health(int GAME_WIDTH, int DASHBOARD_HEIGHT) {
		this.GAME_WIDTH = GAME_WIDTH;
		this.DASHBOARD_HEIGHT = DASHBOARD_HEIGHT;
		
	}
	public void draw(Graphics g) {
		g.setColor(Color.red);
		g.fillRect(0, 0, player1hp, DASHBOARD_HEIGHT);
		g.fillRect(GAME_WIDTH-player2hp, 0, 500, 50);//can reverse this?
	}
}
