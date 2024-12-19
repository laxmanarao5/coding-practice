import java.lang.*;
import java.util.Scanner;
class Evenodd
{
	public static void main(String[] args)
	{
		System.out.print("Enter a number : ");
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		if(a%2==0)
			System.out.println("Given number is Even number :");
		else
			System.out.println("Given number is Odd number ");
		if(a>0)
			System.out.println("Given number is Possitive ");
		else if(a==0)
			System.out.println("Given number is Zero");
		else
			System.out.println("Given number is Negative number ");
		int i,fact=1;
		for(i=1;i<=a;i++)
		{
			fact=fact*i;	
		}
		System.out.println("Factorial of "+a+" is "+fact);
	}
}