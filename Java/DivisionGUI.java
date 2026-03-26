
import javax.swing.*;
import java.awt.*;

public class DivisionGUI extends JFrame {
    private JTextField num1, num2, result;
    private JButton divide;

    public DivisionGUI() {
        setTitle("Integer Division");
        setSize(400, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(4, 2, 10, 10));

        add(new JLabel("Num 1 (Dividend):"));
        num1 = new JTextField();
        add(num1);

        add(new JLabel("Num 2 (Divisor):"));
        num2 = new JTextField();
        add(num2);

        add(new JLabel("Result:"));
        result = new JTextField();
        result.setEditable(false);
        add(result);

        divide = new JButton("Divide");
        divide.addActionListener(e -> {
            try {
                int a = Integer.parseInt(num1.getText());
                int b = Integer.parseInt(num2.getText());
                result.setText(String.valueOf(a / b));
            } catch (NumberFormatException nfe) {
                JOptionPane.showMessageDialog(this, "Error: Number Format Exception, please enter valid integers.", "Input Error", JOptionPane.ERROR_MESSAGE);
            } catch (ArithmeticException ae) {
                JOptionPane.showMessageDialog(this, "Error: Arithmetic Exception, divide by zero prohibited.", "Math Error", JOptionPane.ERROR_MESSAGE);
            } catch (Exception ex) {
                JOptionPane.showMessageDialog(this, "Error: An unexpected error occurred: " + ex.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
            }
        });
        add(divide);

        setVisible(true);
    }

    public static void main(String[] args) {
        new DivisionGUI();
    }
}
