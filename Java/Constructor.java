//Parameterized Constructor and Default Constructor

public class Constructor{
    //My object values 
    float rad;
    float area;
    //It can be used to set initial values for object attributes
    //Constructor without parameter
    public Constructor(){
        rad=12.5f;
        area=rad*rad*3.14f;
        //Constructor without parameter
    }
    //Constructor with parameter
    public Constructor (float r) {
        rad=r;
        area=rad*rad*3.14f;
    }
    public static void main(String []args){
        Constructor c1=new Constructor();
        System.out.println("Area of My Circle"+c1.area+"\n");

        Constructor c2=new Constructor(4.45f);
        System.out.println("\n Area Of My Circle "+c2.area+"\n");
    }
}
//Constructors in Java Are the special method that is used to initialize objects
