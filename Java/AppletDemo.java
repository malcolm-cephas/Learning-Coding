/**
 * Aim: 3a & 3b. Applet message and Factorial calculator (using Swing as Applets are legacy).
 */
import javax.swing.*;
import java.awt.*;

public class AppletDemo extends JFrame {
    public AppletDemo() {
        setTitle("Applet Demo Mirror");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        // Message Section
        JLabel msg = new JLabel("Welcome to Java GUI (Simulated Applet)!");
        msg.setFont(new Font("Arial", Font.ITALIC, 20));
        add(msg);

        // Factorial Section
        JPanel factPanel = new JPanel();
        factPanel.setBorder(BorderFactory.createTitledBorder("Factorial Calculator"));
        
        JTextField input = new JTextField(5);
        JTextField output = new JTextField(15);
        output.setEditable(false);
        JButton compute = new JButton("Compute");

        compute.addActionListener(e -> {
            try {
                int n = Integer.parseInt(input.getText());
                long fact = 1;
                for (int i = 1; i <= n; i++) fact *= i;
                output.setText(String.valueOf(fact));
            } catch (Exception ex) {
                output.setText("Invalid Input");
            }
        });

        factPanel.add(new JLabel("n:"));
        factPanel.add(input);
        factPanel.add(compute);
        factPanel.add(new JLabel("Result:"));
        factPanel.add(output);

        add(factPanel);
        setVisible(true);
    }

    public static void main(String[] args) {
        new AppletDemo();
    }
}
