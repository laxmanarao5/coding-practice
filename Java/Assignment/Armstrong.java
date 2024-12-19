import java.lang.*;
class Armstrong
{
	public static void main(String k[])
	{
		if(k.length==1)
		{
			int n=Integer.parseInt(k[0]);
			int p=n,rem;
			int i,result=0;
			while(p!=0)
			{
				rem=p%10;
				result=result+(rem*rem*rem);
				p=p/10;
			}
			if(n==result)
			{
				System.out.println(n+" is an Armstrong number");
			}
			else
			{
				System.out.println(n+" is not an Armstrong number");
			}

		}
		else
		{
			System.out.println("Please enter only one argument");
		}
	}
}