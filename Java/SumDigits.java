import java.util.Scanner;

public class SumDigits {
    public static void main(String args[]) {
        int n, res, sum = 0;
        Scanner scan = new Scanner(System.in);
        System.out.print("Please Enter No = ");
        n = scan.nextInt();
        int original = n;
        while (n > 0) {
            res = n % 10;
            n = n / 10;
            sum = sum + res;
        }
        System.out.println("Sum of digits of " + original + " is = " + sum);
        scan.close();
    }
}
