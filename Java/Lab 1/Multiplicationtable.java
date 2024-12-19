import java.lang.*;
import java.util.Scanner;
class Multiplicationtable
{
    public static void main(String[] args)
    {
        System.out.print("Enter a number : ");
        Scanner sc=new Scanner(System.in);
		int k=sc.nextInt();
		System.out.print("Enter the range : ");
		int n=sc.nextInt();
		table obj=new table(k,n);
    }
}
class table
{
    table(int k,int n)
    {
        int i;
        for(i=1;i<=n;i++)
        {
            System.out.println(k+" x "+i+" = "+(k*i));
        }
    }
}