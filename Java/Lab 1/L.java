import java.lang.*;
import java.util.Scanner;
class L
{
	public static void main(String[] args)
	{
	Scanner sc=new Scanner(System.in);
	System.out.print("Enter no of lines : ");
	int n=sc.nextInt();
	int i,j;
		for(i=1;i<n;i++)
		{
			System.out.println(" *");
		}
		for(i=1;i<n;i++)
		{
			System.out.print(" *");
		}
	}
}