import java.lang.*;

class C1{
    int a = 5;
    int b = 6;
    void show(){
        System.out.println("A and B values from Base class : "+a+" "+b);
    }
}
class C2 extends C1{
    int c = 10;
    C2(){
        System.out.println("A and B values frmom derived class : "+a+" "+b);
    }
}

class Question4a{
    public static void main(String[] args){
        C2 ob = new C2();
        ob.show();
    }
}