import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
public class GameFrame extends JFrame {
	
	GamePanel panel;
	
	public GameFrame(){
		//window settings
		panel = new GamePanel();
		this.add(panel);
		this.setTitle("BulletHell");
		this.setResizable(true);
		this.setBackground(Color.black);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.pack();
		this.setLocationRelativeTo(null);
		this.setVisible(true);
	}
}
