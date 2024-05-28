class parent{
    int salary=1025000;
}
class rent extends parent{
    float rent=1345; 
}
public class Inheritance extends rent{
    int bonus=123345;
    public static void main(String[]args){
        Inheritance ih=new Inheritance();
        System.out.println("Salary is "+ih.salary);
        System.out.println("The bonus is = "+ih.bonus);
        System.out.println("The rent is = "+ih.rent);
    }
}

//Single Inheritance and Multi level inheritance and Hierarchical Inheritance is possible 
