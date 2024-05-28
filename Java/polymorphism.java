class polymorphism {
    static void help(int a){
        System.out.println("Hello"+a);
    }
    static void help(String str){
        System.out.println("Hello"+str);
    }
    public static void main(String []args){
        help(12);
        help("Atish");
    }
}
//Method Overloading