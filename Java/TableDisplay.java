/**
 * Aim: 9. Display table from Table.txt using GridLayout.
 */
import javax.swing.*;
import java.awt.*;
import java.io.*;

public class TableDisplay extends JFrame {
    public TableDisplay() {
        setTitle("Table Display");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel panel = new JPanel();
        
        try {
            // First create a manifest of content
            BufferedReader bfr = new BufferedReader(new FileReader("Table.txt"));
            String line;
            int rows = 0;
            int cols = 0;
            
            while ((line = bfr.readLine()) != null) {
                String[] parts = line.split(",");
                cols = Math.max(cols, parts.length);
                rows++;
            }
            bfr.close();

            panel.setLayout(new GridLayout(rows, cols));
            
            bfr = new BufferedReader(new FileReader("Table.txt"));
            while ((line = bfr.readLine()) != null) {
                String[] parts = line.split(",");
                for (String p : parts) panel.add(new JLabel(p.trim()));
            }
            bfr.close();
            
            add(panel);
        } catch (Exception e) {
            System.out.println("Error reading Table.txt: " + e.getMessage());
            // Create a dummy Table.txt if none exists for demo
            try {
                FileWriter fw = new FileWriter("Table.txt");
                fw.write("Name, Age, City\nNaveen, 21, Hyd\nMadhu, 22, Bng");
                fw.close();
                System.out.println("Created sample Table.txt for demo.");
            } catch (IOException ioe) {}
        }
        setVisible(true);
    }

    public static void main(String[] args) {
        new TableDisplay();
    }
}
