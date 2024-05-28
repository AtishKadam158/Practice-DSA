public class Encapsulation {
    private String st="kadam";
    public void getname(){
        System.out.println(st);
    }
    public void setname(String sr){
        st=sr;
    }
    public static void main(String []args){
        
        Encapsulation en=new Encapsulation();
        System.out.println(en.st);
        en.setname("Atish");
        en.getname();
        System.out.println(en.st);
    }
}
