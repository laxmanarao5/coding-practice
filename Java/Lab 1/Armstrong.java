import java.lang.*;
import java.util.Scanner;
class Armstrong
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n=sc.nextInt();
		armstrong obj=new armstrong();
		int a=obj.armstrong(n);
		if(a==1)
			System.out.println("Given number is an armstrong number");
		else
			System.out.println("Given number is not an armstrong number");
	}
}
class armstrong
{
	int armstrong(int n)
	{
		int temp=n;
		int rem,result=0;
		while(temp>0)
		{
			rem=temp%10;
			result=result+(rem*rem*rem);
			temp=temp/10;			
		}
		if(n==result)
		return 1;
		else
		return 0;
	} 
}