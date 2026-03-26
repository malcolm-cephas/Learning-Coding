
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Calculator extends JFrame implements ActionListener {
    private JTextField display;
    private String operator = "";
    private double firstNum = 0;

    public Calculator() {
        setTitle("Java Calculator");
        setSize(300, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        display = new JTextField();
        display.setFont(new Font("Arial", Font.BOLD, 24));
        display.setHorizontalAlignment(JTextField.RIGHT);
        add(display, BorderLayout.NORTH);

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4, 4, 5, 5));

        String[] buttons = {
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "0", "C", "=", "+"
        };

        for (String label : buttons) {
            JButton btn = new JButton(label);
            btn.setFont(new Font("Arial", Font.BOLD, 18));
            btn.addActionListener(this);
            panel.add(btn);
        }

        add(panel, BorderLayout.CENTER);
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String cmd = e.getActionCommand();

        if (cmd.charAt(0) >= '0' && cmd.charAt(0) <= '9') {
            display.setText(display.getText() + cmd);
        } else if (cmd.equals("C")) {
            display.setText("");
            operator = "";
        } else if (cmd.equals("=")) {
            double secondNum = Double.parseDouble(display.getText());
            calculate(secondNum);
        } else {
            firstNum = Double.parseDouble(display.getText());
            operator = cmd;
            display.setText("");
        }
    }

    private void calculate(double secondNum) {
        try {
            double result = 0;
            switch (operator) {
                case "+": result = firstNum + secondNum; break;
                case "-": result = firstNum - secondNum; break;
                case "*": result = firstNum * secondNum; break;
                case "/":
                    if (secondNum == 0) throw new ArithmeticException("Divide by zero");
                    result = firstNum / secondNum; break;
            }
            display.setText(String.valueOf(result));
        } catch (Exception ex) {
            display.setText("Error: " + ex.getMessage());
        }
    }

    public static void main(String[] args) {
        new Calculator();
    }
}
