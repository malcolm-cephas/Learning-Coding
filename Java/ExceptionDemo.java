
import java.io.*;


class InvalidAgeException extends Exception {
    public InvalidAgeException(String s) { super(s); }
}

public class ExceptionDemo {
    public static void main(String[] args) {

        try {
            System.out.println("Result: " + (10 / 0));
        } catch (ArithmeticException e) {
            System.out.println("Unchecked Exception: " + e.getMessage());
        }


        try (FileReader fr = new FileReader("non_existent.txt")) {

        } catch (FileNotFoundException e) {
            System.out.println("Checked Exception: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("IO Exception: " + e.getMessage());
        }


        try {
            validateAge(15);
        } catch (InvalidAgeException e) {
            System.out.println("Custom Exception: " + e.getMessage());
        }
    }

    static void validateAge(int age) throws InvalidAgeException {
        if (age < 18) throw new InvalidAgeException("Age less than 18 is not allowed.");
        else System.out.println("Welcome to Vote!");
    }
}
