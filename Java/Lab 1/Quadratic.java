import java.lang.*;
import java.util.Scanner;
class Quadratic
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
	System.out.print("Enter the coefficients : ");
	Double a=sc.nextDouble();
	Double b=sc.nextDouble();
	Double c=sc.nextDouble();
	Double delta=((b*b)-(4*a*c));
	Double x1,x2;
	if(delta==0)
	{
		x1=(-b/(2*a));
		System.out.println("Roots are "+x1+" and "+x1);
	}
	else if(delta>0)
	{
		x1=(-b+(Math.sqrt(delta)))/(2*a);
		x2=(-b-(Math.sqrt(delta)))/(2*a);
		System.out.println("Roots are "+String.format("%.2f",x1)+" and "+String.format("%.2f",x2));
	}
	else
	{
		x1=-b/(2*a);
		x2=(Math.sqrt(-delta));
		System.out.println("Roots are "+String.format("%.2f",x1)+"+"+String.format("%.2f",x2)+"i");
		System.out.println("Roots are "+String.format("%.2f",x1)+"-"+String.format("%.2f",x2)+"i");
	}
	}
}