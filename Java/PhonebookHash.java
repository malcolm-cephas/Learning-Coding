/**
 * Aim: 11. Hash table phonebook from text file.
 */
import java.util.*;
import java.io.*;

public class PhonebookHash {
    public static void main(String[] args) {
        Hashtable<String, String> phonebook = new Hashtable<>();
        
        try {
            // Read from file
            BufferedReader bfr = new BufferedReader(new FileReader("phonebook.txt"));
            String line;
            while ((line = bfr.readLine()) != null) {
                String[] parts = line.split("\t");
                if (parts.length >= 2) {
                    phonebook.put(parts[0], parts[1]);
                    phonebook.put(parts[1], parts[0]); // Reverse search
                }
            }
            bfr.close();
            
            // Search
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter name or number to search in Phonebook:");
            String query = sc.nextLine();
            
            if (phonebook.containsKey(query)) {
                System.out.println("Result: " + phonebook.get(query));
            } else {
                System.out.println("Entry not found.");
            }
            sc.close();
        } catch (Exception e) {
            System.out.println("Error: Please make sure phonebook.txt exists with name TAB phone.");
        }
    }
}
