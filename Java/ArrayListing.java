import java.util.ArrayList;
import java.util.Collections;
public class ArrayListing {
    public static void main(String[] args) {
        // Create a generic ArrayList of Strings
        ArrayList<String> stringList = new ArrayList<>();

        // Adding elements to the ArrayList
        stringList.add("Hello");
        stringList.add("World");


        // Printing the elements
        System.out.println(stringList.get(0));
        System.out.println(stringList.get(1));

        stringList.set(0,"Atish");
        stringList.set(1,"Kadam");
        System.out.println(stringList.get(0));
        System.out.println(stringList.get(1));
        stringList.remove(0);
        System.out.println(stringList.get(0));
        ArrayList<Integer>al=new ArrayList<>();
        al.add(45);
        al.add(20);
        al.add(78);
        al.add(45);
        al.add(63);
        Collections.sort(al);
        for (int i : al){
            System.out.print(i+" ");
        }
    }
}
