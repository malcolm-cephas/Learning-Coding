import java.util.Scanner;

public class SeriesFact {
    public static void main(String args[]) {
        int i;
        double sum = 0;
        System.out.print("Enter number of terms in series: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (i = 1; i <= n; i++) {
            double f = 1;
            for (int k = 1; k <= i; k++) f *= k;
            sum = sum + (1.0 / f);
        }
        System.out.println("Sum of " + n + " terms is = " + sum);
        sc.close();
    }
}
