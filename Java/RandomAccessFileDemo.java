
import java.io.*;

public class RandomAccessFileDemo {
    public static void main(String[] args) {
        try {
            RandomAccessFile raf = new RandomAccessFile("raf_test.txt", "rw");


            raf.writeUTF("Hello World");
            raf.writeInt(123);


            raf.seek(0);
            System.out.println("UTF Read: " + raf.readUTF());
            System.out.println("Int Read: " + raf.readInt());

            raf.close();
        } catch (IOException e) {
            System.out.println("RAF Error: " + e.getMessage());
        }
    }
}
