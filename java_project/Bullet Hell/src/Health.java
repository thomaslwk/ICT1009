import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
public class Health{
	
	int player1;
	int player2;
	
	int player1hp = 450;
	int player2hp = 450;
	
	public Health() {
	}
	public void draw(Graphics g) {
//		g.setColor(Color.red);
//		g.fillRect(0, 0, player1hp, DASHBOARD_HEIGHT);
//		g.fillRect(GAME_WIDTH-player2hp, 0, 500, 50);//can reverse this?
		g.setColor(Color.red);
		g.fillRect(0, 0, player1hp, GamePanel.DASHBOARD_HEIGHT);
		g.setFont(new Font("Arial", Font.BOLD, 25));
	    g.setColor(Color.WHITE);
		g.drawString("Player 1", player1hp +5, 35);
		g.setColor(Color.red);
		g.fillRect(GamePanel.GAME_WIDTH-player2hp, 0, 500, GamePanel.DASHBOARD_HEIGHT);
		g.setFont(new Font("Arial", Font.BOLD, 25));
	    g.setColor(Color.WHITE);
		g.drawString("Player 2", GamePanel.GAME_WIDTH-player2hp-100, 35);
	}
}
