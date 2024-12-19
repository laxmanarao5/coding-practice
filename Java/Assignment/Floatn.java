import java.lang.*;
class Floatvalue
{
	float square(float a)
	{
		return a*a;
	}
}
class Floatn
{
	public static void main(String k[])
	{
		if(k.length==1)
		{
			float n=Float.parseFloat(k[0]);
			Floatvalue a=new Floatvalue();
			float x=a.square(n);
			System.out.println("Square of given float value is "+x);
		}
		else
		{
			System.out.println("Please enter only one rgument");
		}
	}
}