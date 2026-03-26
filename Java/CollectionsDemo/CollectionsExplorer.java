
package CollectionsDemo;
import java.util.*;

public class CollectionsExplorer {
    public static void main(String[] args) {

        List<String> list = new ArrayList<>();
        list.add("Java"); list.add("C++"); list.add("Java");
        System.out.println("ArrayList: " + list);


        Set<String> set = new HashSet<>(list);
        System.out.println("HashSet (Unique): " + set);


        Map<Integer, String> map = new HashMap<>();
        map.put(1, "Student 1");
        map.put(2, "Student 2");
        System.out.println("HashMap: " + map);
    }
}
