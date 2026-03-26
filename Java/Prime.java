import java.util.Scanner;

public class Prime {
    public static void main(String args[]) {
        int i, j, p = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter range up to which to print primes: ");
        int n = sc.nextInt();
        for (i = 2; i <= n; i++) {
            p = 1;
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    p = 0;
                    break;
                }
            }
            if (p == 1) System.out.print(i + " ");
        }
        sc.close();
    }
}
