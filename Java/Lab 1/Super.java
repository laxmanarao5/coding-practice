import java.lang.*;
import java.util.Scanner;
class This
{
	int a=10;
	This()
	{
		System.out.println("Base class constructor");
	}
	void sum()
	{
		System.out.println("Base class function");
	}
}
class Super extends This
{
	int a=20;
	Super()
	{
		System.out.println("Derived class constructor");
	}
	void sum()
	{
		int sum=this.a+super.a;
		System.out.println("Sum of a of derived class and base class is "+sum);
	}
	public static void main(String[] args)
	{
		
	}
}