import java.lang.*;
class Primenumbers
{
	public static void main(String k[])
	{
		if(k.length==2)
		{
			float a=Float.parseFloat(k[0]);
			float b=Float.parseFloat(k[1]);
			float i,j;
			int count=0;
			for(i=a;i<=b;i++)
			{
				for(j=0;j<=i;j++)
				{
					if(i%j==0)
					{
						count=count+1;
					}
				}
			if(count==2)
			{
				System.out.print(i+"	");
			}
			count=0;
			}
		}
		else
		{
			System.out.println("Please Enter two parameters only");
		}
	}
}