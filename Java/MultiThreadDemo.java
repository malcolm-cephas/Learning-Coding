
import java.util.Random;

class RandomGenerator extends Thread {
    public void run() {
        Random r = new Random();
        for (int i = 0; i < 5; i++) {
            int n = r.nextInt(100);
            System.out.println("Generated: " + n);
            if (n % 2 == 0) {
                new SquareThread(n).start();
            } else {
                new CubeThread(n).start();
            }
            try { Thread.sleep(1000); } catch (InterruptedException e) {}
        }
    }
}

class SquareThread extends Thread {
    int x;
    SquareThread(int x) { this.x = x; }
    public void run() {
        System.out.println("Square of " + x + " = " + (x * x));
    }
}

class CubeThread extends Thread {
    int x;
    CubeThread(int x) { this.x = x; }
    public void run() {
        System.out.println("Cube of " + x + " = " + (x * x * x));
    }
}

public class MultiThreadDemo {
    public static void main(String[] args) {
        RandomGenerator rg = new RandomGenerator();
        rg.start();
    }
}
