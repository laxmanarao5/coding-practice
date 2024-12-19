class A
{
	int a,b;
	A(int a)
	{
		System.out.println("Constructor of class A called and a = "+a);
	}
    A()
    {
        this(10);
        System.out.println("Constructor of class A called ");
    }
	void m(int a,int b)
	{
		this.a=a;
		this.b=b;
		System.out.println("m function called a+b = "+a+b);
	}
}
class B extends A
{
	B()
	{
        super();
		System.out.println("Constructor called from class B");		
	}
}
class Question1b
{
    public static void main(String args[])
    {
        B obj=new B();
        obj.m(10,20);
    }
}