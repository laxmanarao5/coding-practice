import java.lang.*;
class Palindrome
{
	public static void main(String k[])
	{
		if(k.length==1)
		{
			int n=Integer.parseInt(k[0]);
			int p=n,rem,result=0;
			while(p!=0)
			{
				rem=p%10;
				result=(result*10)+rem;
				p=p/10;
			}
			if(result==n)
			{
				System.out.println(n+" is a Palindrome");
			}
			else
			{
				System.out.println(n+" is not palindrome");
			}
		}	
		else
		{		
			System.out.println("Please eneter only one argument ");
		}	
	}
}