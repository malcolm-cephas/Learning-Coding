/**
 * Aim: 10. Handle mouse events using Adapter classes.
 */
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MouseEventsDemo extends JFrame {
    private String msg = "Event: None";

    public MouseEventsDemo() {
        setTitle("Mouse Events Adapter Demo");
        setSize(400, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        addMouseListener(new MyMouseAdapter());
        addMouseMotionListener(new MyMouseAdapter());
        setVisible(true);
    }

    class MyMouseAdapter extends MouseAdapter {
        @Override
        public void mousePressed(MouseEvent e) { msg = "Mouse Pressed"; repaint(); }
        @Override
        public void mouseReleased(MouseEvent e) { msg = "Mouse Released"; repaint(); }
        @Override
        public void mouseEntered(MouseEvent e) { msg = "Mouse Entered"; repaint(); }
        @Override
        public void mouseExited(MouseEvent e) { msg = "Mouse Exited"; repaint(); }
        @Override
        public void mouseMoved(MouseEvent e) { msg = "Mouse Moved"; repaint(); }
        @Override
        public void mouseDragged(MouseEvent e) { msg = "Mouse Dragged"; repaint(); }
    }

    @Override
    public void paint(Graphics g) {
        super.paint(g);
        g.setFont(new Font("Arial", Font.BOLD, 20));
        g.drawString(msg, 200 - (msg.length() * 5), 200);
    }

    public static void main(String[] args) {
        new MouseEventsDemo();
    }
}
