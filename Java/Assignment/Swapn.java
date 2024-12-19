import java.lang.*;
class Swapn
{
	public static void main(String k[])
	{
		if(k.length==2)
		{
			int a=Integer.parseInt(k[0]);
			int b=Integer.parseInt(k[1]);
			System.out.println("*****Before swaping*****");
			System.out.println("a="+a+"b="+b);
			int c=a;
			a=b;
			b=c;
			System.out.println("*****After swaping*****");
			System.out.println("a="+a+"b="+b);
		}
		else
		{
			System.out.println("Please Enter two parameters only");
		}
	}
}