/**
 * Aim: 13. Recursive file listing.
 */
import java.io.*;

public class FileListing {
    public static void main(String[] args) {
        String path = "."; // Current directory
        File dir = new File(path);
        
        System.out.println("Listing all files recursively starting from: " + dir.getAbsolutePath());
        listFiles(dir, "");
    }

    public static void listFiles(File dir, String space) {
        File[] files = dir.listFiles();
        if (files != null) {
            for (File file : files) {
                if (file.isDirectory()) {
                    System.out.println(space + "[DIR] " + file.getName());
                    listFiles(file, space + "  ");
                } else {
                    System.out.println(space + "[FILE] " + file.getName());
                }
            }
        }
    }
}
