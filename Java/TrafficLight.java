
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class TrafficLight extends JFrame implements ActionListener {
    private JRadioButton r1, r2, r3;
    private JLabel display;

    public TrafficLight() {
        setTitle("Traffic Light Simulation");
        setSize(400, 300);
        setLayout(new FlowLayout());
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        display = new JLabel("");
        display.setFont(new Font("Arial", Font.BOLD, 30));
        add(display);

        r1 = new JRadioButton("Red");
        r2 = new JRadioButton("Yellow");
        r3 = new JRadioButton("Green");

        ButtonGroup bg = new ButtonGroup();
        bg.add(r1); bg.add(r2); bg.add(r3);

        r1.addActionListener(this);
        r2.addActionListener(this);
        r3.addActionListener(this);

        add(r1); add(r2); add(r3);
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (r1.isSelected()) {
            display.setText("STOP");
            display.setForeground(Color.RED);
        } else if (r2.isSelected()) {
            display.setText("READY");
            display.setForeground(Color.YELLOW);
        } else if (r3.isSelected()) {
            display.setText("GO");
            display.setForeground(Color.GREEN);
        }
    }

    public static void main(String[] args) {
        new TrafficLight();
    }
}
