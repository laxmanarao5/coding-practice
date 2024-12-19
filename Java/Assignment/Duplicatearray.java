import java.lang.*;
class Duplicatearray
{
	public static void main(String k[])
	{
		if(k.length==0)
		{
			System.out.println("Please enter some numbers ");
		}
		else
		{
			int i,a;
			int n=k.length;
			int array[]=new int[n];
			for(i=0;i<n;i++)
			{
				a=Integer.parseInt(k[i]);
				array[i]=a;
			}
			int darray[]=new int[n];
			for(i=0;i<n;i++)
			{
				darray[i]=array[i];
			}
			System.out.println("**** Duplicate array ****");
			for(i=0;i<n;i++)
			{
				System.out.print(darray[i]+"	");
			}
		}
	}
}