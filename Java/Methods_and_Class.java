//real life example 
//object - car 
//Attribute - weight and color
//methods - drive and appply brake
class student{
    int roll;
    String name;
}

public class Methods_and_Class{
    float rad=0;
    float area=20;
    static float Area(float rad){
        float ft=3.14f;
        ft=rad*ft;
        return ft*rad;
    }
    static void method_m(){
        System.out.println("Hello My Code is running");
    }
    public static void main(String args[]){
        Methods_and_Class c1=new Methods_and_Class();
        c1.rad=12;
        c1.area=132;
        System.out.println("Rad is " +c1.rad);
        System.out.println("Area is "+c1.area);
        Methods_and_Class c2=new Methods_and_Class();
        System.out.println("Now for C2 rad ="+c2.rad);
        System.out.println("Area for Object C2");
        float ft=Area(c1.rad);
        System.out.println(ft);
        method_m();
        student s1=new student();
        s1.roll=1234;
        s1.name="Rahul";
        System.out.println("Roll no of Student : "+s1.roll);
        System.out.println("My name is "+s1.name);
    }
}