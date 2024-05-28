class Practice{
    public static void main(String args[]){
        System.out.println("Atish Kadam");
        int a=130;

        byte bt=(byte)a;//Range from -127 to 127 1Byte
        System.out.println("Printing byte datatype"+bt);
        bt='a';
        System.out.println(bt);

        boolean ar=true;
        System.out.println(ar);
        
        char ch='a';
        System.out.println(ch);

        float ft=10.09f;
        System.out.println(ft);

        String str="Spring nature";
        System.out.println("Printing Datatype string" +str);

        System.out.println(10>>2);//right shift operator
        System.out.println(12<<2);
        
        int num=2;
        switch(num){
            case 0:
                System.out.println("It is Zero");
                break;
            case 1:
                System.out.println("It is one");
                break;
            case 2:
                System.out.println("It is two");
                break;
            default :
                System.out.println("It is not int");
        }
        
        int n=10;

        for (int i=0;i<n;i++){
            System.out.println(i);
        }

        int m=12;
        while(m>0){
            System.out.println(m+" ");
            m--;
        }
        do{
            System.out.println(n);
            n--;
        }while(n>0);

    }
}