import java.lang.*;
class Operators
{
    public static void main(String[] args)
    {
        int a=10;
        int b=20;
        int i,k=0;
        float f=a;
        float g=b;
        float e=f/g;
         System.out.println("Opearaters in java");
         System.out.println("");
         System.out.println("Addition opeator");
         System.out.println("Sum of "+a+" and "+b+" is "+a+b);
         System.out.println("Substraction");
         System.out.println("Substraction of "+a+" and "+b+" is "+(a-b));
         System.out.println("Multiplication");
         System.out.println("product of "+a+" and "+b+" is "+a*b);
         System.out.println("Division ");
         System.out.println("a/b is "+e);
         System.out.println("Increment operator");
         int c=a++;
        int d=b--;
         System.out.println("a++ is "+c);
         System.out.println("Decrement operator");
         System.out.println("b-- is "+d);
         System.out.println("");
         System.out.println("Control statements");
         System.out.println("");
         System.out.println("If else statements");
         if(a>b)
             System.out.println("If block executed");
         else
             System.out.println("Else block executed");
         if(a<b)
             System.out.println("If block executed");
         else
             System.out.println("Else block executed");
         System.out.println("For loop");
         for(i=0;i<5;i++)
             System.out.println("loop executed "+i+"times");
         System.out.println("");
         System.out.println("While loop");
         while(k!=4)
         {
             System.out.println("while loop excuted "+k+" times");
             k++;
         }
         
    }
}