import java.lang.*;
import java.util.Scanner;
class Calculator
{
 public static void main(String[] args)
  {
      Scanner sc=new Scanner(System.in);
      System.out.print("Enter the Expression : ");
      int a=sc.nextInt();
      char op=sc.next().charAt(0);
      int b=sc.nextInt();
	char c=sc.next().charAt(0);
	if(c=='=')
	{
      switch(op)
       {
         case '+':
                   System.out.println(a+b);
                    break;
         case '-':
                   System.out.println(a-b);
                    break;
         case  '*':
                   System.out.println(a*b);
                    break;
         case '/':
                   if(b==0)
                     System.out.println("operation cannot be performed");
                   else
                  System.out.println(a/b);
                      break;
         case '%':
                     if(b==0)
                     System.out.println("operation cannot be performed");
                    else
                      System.out.println(a%b);
			break;
         default:
                   System.out.println("The operator you entered is incorrect");
        }
	}
     
}
}