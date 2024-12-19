import java.lang.*;
import java.util.Scanner;
class Inttostring
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n=sc.nextInt();
		String str=Integer.toString(n);
		System.out.print(str);
		/*ring value=field.getType(str);
		System.out.print(" is a "+value+" type");*/
	}
}