public class Fibo {
    public static void main(String args[]) {
        int a = 0, b = 1, temp, n;
        System.out.println("First 10 numbers in Fibonacci Series:");
        for (n = 1; n <= 10; n++) {
            System.out.println(a);
            temp = a + b;
            a = b;
            b = temp;
        }
    }
}
