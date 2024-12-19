import java.lang.*;
class Add
{
	static void add(int a,int b)
		{
			int c;
			c=a+b;
			System.out.println("Sum of numbers is "+c);
		}
}
class Mul
{
	void mul(int a,int b)
	{
		int c=a*b;
		System.out.println("Product of numbers is "+c);
	}
}
class First
{
	public static void main(String k[])
	{
	System.out.println("Hello World");
	int a=10;
	int b=20;
	Add.add(a,b);
	Mul x=new Mul;
	x.mut(a,b);
	}
}