import java.lang.*;
class Reversearray
{
	public static void main(String k[])
	{
		if(k.length!=0)
		{
			int i,a;
			int n=k.length;
			int array[]=new int[n];
			for(i=1;i<=n;i++)
			{
				a=Integer.parseInt(k[i]);
				array[i]=a;
			}
			int reverse[]=new int[n];
			int j=0;
			for(i=n;i>=0;i--)
			{
				reverse[j]=array[i];
				j++;
			}
			System.out.println("*** Reverse of array ***");
			for(i=0;i<n;i++)
			{
				System.out.print(reverse[i]+"	");
			}
		}
		else
		{
			System.out.println("Please enter some numbers ");
		}
	}
}