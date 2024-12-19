import java.lang.*;
class Outer
{
    int x=5;
    static int y=10;
    void m2()
    {
       System.out.println("outer class non static ");
    }
    static void m3()
    {
       System.out.println("outer class static ");
    }
    static class Nested
    {
       void m(Outer o)//through parameters also you can access or directly creating object
       {
          //Outer o=new Outer();
          System.out.println("x:"+o.x+"\ny:"+y);
         //instance variables can't access directly
       }
      static void m1(Outer o)
      {
       // Outer o=new Outer();
       System.out.println("x:"+o.x+"\ny:"+y);
      }
   };
   Nested n=new Nested();
   //System.out.println("n :"+n.hashCode(););error
   //n.m(); Not possible
   //Nested.m1();error
};
class Question3b
{
    public static void main(String k[])//program driver
    {
        System.out.println("Executed");
        Outer o=new Outer();
        //o.n.m(); without parameters
        //o.n.m1();//static m1 method-without parameters
        o.n.m(o);
        o.n.m1(o);
        o.m2();

     //If you want to access anythin of inner class,must access with Outer object

       Outer.m3();
    }
}