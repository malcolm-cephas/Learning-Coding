import java.util.Scanner;

public class Palin {
    public static void main(String args[]) {
        System.out.print("Enter string to check: ");
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        StringBuffer tmp = new StringBuffer(s);
        tmp.reverse();
        String str2 = new String(tmp);
        if (s.equals(str2))
            System.out.println("The given string " + s + " is palindrome");
        else
            System.out.println("The given string " + s + " is not palindrome");
        sc.close();
    }
}
