import java.lang.*;
import java.util.Scanner;
class Palindrome
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n=sc.nextInt();
		palind p=new palind();
		int a=p.palindrome(n);
		if(a==1)
			System.out.println("Given number is an Palindrome number");
		else
			System.out.println("Given number is not an Palindrome number");
	}
}
class palind
{
	int palindrome(int n)
	{
		int temp=n;
		int rem,result=0;
		while(temp>0)
		{
			rem=temp%10;
			result=(result*10)+rem;
			temp=temp/10;			
		}
		if(n==result)
		return 1;
		else
		return 0;
	}
}