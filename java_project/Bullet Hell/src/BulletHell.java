import java.awt.Color;

import javax.swing.JFrame;

public class BulletHell {

	public static void main(String[] args) {
		//frame settings
		JFrame frame = new JFrame();
		frame.setTitle("BulletHell");
		frame.setResizable(true);
		frame.setBackground(Color.black);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.add(new GamePanel());
		frame.pack();
		frame.setLocationRelativeTo(null);
		frame.setVisible(true);

	}

}
