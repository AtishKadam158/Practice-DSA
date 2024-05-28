import java.util.*;

public class LinkedListing {
    public static void main(String[] args) {
        LinkedList<Integer> ll = new LinkedList<Integer>();
        ll.add(12);
        ll.add(23);
        ll.add(2);
        ll.add(43);
        
        for (int i : ll) {
            System.out.println(i + " ");
        }
        Collections.sort(ll);
        for (int i : ll) {
            System.out.println(i + " ");
        }
        System.out.println("Size of the list"+ll.size()+ " ");
    }
}
