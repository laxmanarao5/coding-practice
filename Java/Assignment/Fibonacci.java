import java.lang.*;
class Fibonacci
{
	public static void main(String k[])
	{	
		if(k.length==1)
		{
			int n=Integer.parseInt(k[0]);
			if(n==1)
			{
				System.out.println("0");
			}
			else if(n==2)
			{
				System.out.println("1");
			}
			else
			{
				int i,t1=0,t2=1,t3;
				System.out.print(t1+"	");
				System.out.print(t2+"	");
				for(i=3;i<=n;i++)
				{
					t3=t1+t2;
					t1=t2;
					t2=t3;
					System.out.print(t3+"	");
				}
			}
		}
		else
		{
			System.out.println("Please enter only one argument only");
		}
	}
}