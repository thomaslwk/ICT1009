import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;
public class MenuState extends Rectangle {


    boolean startHover;
    boolean quitHover;

    public MenuState(int x, int y) {
        super(x, y);
    }
    Rectangle startButton = new Rectangle(500, 300, 200, 40);
    Rectangle quitButton = new Rectangle(500, 375, 200, 40);

    public void draw(Graphics g) {
        g.setFont(new Font("Arial", Font.BOLD, 50));
        g.setColor(Color.RED);
        g.drawString("Bullet Hell", 470, 150);
        if(!startHover)
            g.setColor(Color.BLUE);
        else
            g.setColor(Color.PINK);
        g.fillRect(startButton.x, startButton.y, startButton.width, startButton.height);
        g.setFont(new Font("Arial", Font.BOLD, 25));
        g.setColor(Color.GRAY);
        g.drawString("test", startButton.x + 35, startButton.y + 30);
        if(!quitHover)
            g.setColor(Color.BLUE);
        else
            g.setColor(Color.PINK);
        g.fillRect(quitButton.x, quitButton.y, quitButton.width, quitButton.height);
        g.setColor(Color.GRAY);
        g.drawString("Quit Game", quitButton.x + 35, quitButton.y + 30);
    }

    public void mouseMoved(MouseEvent e) {
        int mx = e.getX();
        int my = e.getY();
        
        if (mx > startButton.x && mx < startButton.x + startButton.width && my > startButton.y && my < startButton.x + startButton.height) {
            startHover = true;
//            System.out.println("Mouse hover true invoked.");
        } else {
            startHover = false;
//            System.out.println("Mouse hover false invoked.");
        }
        if (mx > quitButton.x && mx < quitButton.x + quitButton.width && my > quitButton.y && my < quitButton.x + quitButton.height) {
            quitHover = true;
        } else {
            quitHover = false;
        }
    }
}


