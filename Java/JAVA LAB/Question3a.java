import java.lang.*;
import java.util.*;
class Question3a
{
    int a=5;
    static int c=6;
    class Inner
    {
        public void m()
        {
            System.out.println("Inner class called "+a+","+c);//5,6
        }
    };
    void m2()
    {
       Inner i=new Inner();
       i.m();
    }
    public static void main(String k[])
    {
       Question3a Obj1=new Question3a();
       Obj1.m2();
    }
}