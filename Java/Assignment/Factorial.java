import java.lang.*;
class Fact
{
	int fact(int n)
	{
		int i,result=1;
		for(i=1;i<=n;i++)
		{
			result=result*i;
		}
		return result;
	}
}
class Factorial				//program driver
{
	public static void main(String k[])
	{
		if(k.length==1)
		{
			int a=Integer.parseInt(k[0]);
			Fact x=new Fact();
			System.out.println("Factorial of given number : "+x.fact(a));
		}
		else
		{
			System.out.println("Please enter only one argument ");
		}
	}
}