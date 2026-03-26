import java.util.Scanner;

public class Swap {
    public static void main(String args[]) {
        int n1, n2, temp;
        Scanner scan = new Scanner(System.in);
        System.out.print("Please Enter No 1: ");
        n1 = scan.nextInt();
        System.out.print("Please Enter No 2: ");
        n2 = scan.nextInt();
        
        temp = n1;
        n1 = n2;
        n2 = temp;
        
        System.out.println("After Swapping:");
        System.out.println("First No: " + n1);
        System.out.println("Second No: " + n2);
        scan.close();
    }
}
