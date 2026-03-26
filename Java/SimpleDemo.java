/**
 * Aim: 1. Demonstration of if-else condition and a for loop.
 */
public class SimpleDemo {
    public static void main(String[] args) {
        System.out.println("Java Simple Demo Script:");
        
        // Demonstration of for loop
        System.out.println("Counting from 1 to 5:");
        for (int i = 1; i <= 5; i++) {
            System.out.print(i + " ");
        }
        System.out.println("\n");

        // Demonstration of if-else
        int number = 10;
        if (number % 2 == 0) {
            System.out.println(number + " is an EVEN number.");
        } else {
            System.out.println(number + " is an ODD number.");
        }
    }
}
