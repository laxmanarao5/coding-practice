import java.lang.*;
class Printeven
{
	public static void main(String k[])
	{
		if(k.length==0)
			System.out.println("Please enter some number");
		else
		{
		int i,a,b;
		System.out.println("*****Even numbers*****");
		for(i=0;i<k.length;i++)
		{
			a=Integer.parseInt(k[i]);
			if(a%2==0)
			{
			System.out.print(a+"	");
			}
		}
		System.out.println();
		System.out.println("*****Odd numbers*****");
		for(i=0;i<k.length;i++)
		{
			a=Integer.parseInt(k[i]);
			if(a%2!=0)
			{
			System.out.print(a+"	");
			}
		}
		}
	}
}