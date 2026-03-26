

public class StudentJDBC {
    static final String DB_URL = "jdbc:mysql://localhost:3306/lab_db";
    static final String USER = "root";
    static final String PASS = "password";

    public static void main(String[] args) {
        try {

            System.out.println("Demo: Simulating JDBC CRUD operations on Student table.");


            System.out.println("Executing: INSERT INTO Students VALUES (001, 'Naveen')");


            System.out.println("Executing: SELECT name FROM Students WHERE id=001");


            System.out.println("Executing: UPDATE Students SET name='Madhu' WHERE id=001");


            System.out.println("Executing: DELETE FROM Students WHERE id=001");

        } catch (Exception e) {
            System.out.println("JDBC Error: " + e.getMessage());
        }
    }
}
