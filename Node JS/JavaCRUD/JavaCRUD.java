
import java.sql.*;
import java.util.Scanner;

public class JavaCRUD {

    static final String DB_URL = "jdbc:mysql://localhost:3306/lab_db";
    static final String USER = "root";
    static final String PASS = "password";

    public static void main(String[] args) {
        Connection conn = null;
        Statement stmt = null;
        try (Scanner sc = new Scanner(System.in)) {



            System.out.println("Connecting to database...");

            System.out.println("Connected successfully (connection logic stubbed for demo).");

            boolean running = true;
            while (running) {
                System.out.println("\n--- CRUD Operations ---");
                System.out.println("1. Create (Insert Student)");
                System.out.println("2. Read (Select All)");
                System.out.println("3. Update (Change Name)");
                System.out.println("4. Delete (Remove Student)");
                System.out.println("5. Exit");
                System.out.print("Choice: ");
                int choice = sc.nextInt();

                switch (choice) {
                    case 1:
                        System.out.print("Enter ID: "); int id = sc.nextInt();
                        System.out.print("Enter Name: "); String name = sc.next();
                        System.out.println("Executing: INSERT INTO Students VALUES (" + id + ", '" + name + "')");
                        break;
                    case 2:
                        System.out.println("Executing: SELECT * FROM Students");
                        break;
                    case 3:
                        System.out.print("Enter ID to Update: "); int uid = sc.nextInt();
                        System.out.print("Enter New Name: "); String nname = sc.next();
                        System.out.println("Executing: UPDATE Students SET name='" + nname + "' WHERE id=" + uid);
                        break;
                    case 4:
                        System.out.print("Enter ID to Delete: "); int did = sc.nextInt();
                        System.out.println("Executing: DELETE FROM Students WHERE id=" + did);
                        break;
                    case 5:
                        running = false;
                        break;
                    default:
                        System.out.println("Invalid choice!");
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try { if (stmt != null) stmt.close(); if (conn != null) conn.close(); } catch (SQLException se) {}
        }
    }
}
