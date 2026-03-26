import java.util.Scanner;

public class Factorial {
    public static void main(String args[]) {
        int n, fact = 1;
        Scanner scan = new Scanner(System.in);
        System.out.print("Please Enter a No: ");
        n = scan.nextInt();
        for (int i = n; i >= 1; i--) {
            fact = fact * i;
        }
        System.out.println("Factorial of " + n + " is " + fact);
        scan.close();
    }
}
