import java.lang.*;
import java.util.*;
interface Vehicle
{
	void seatcapacity();
	void ac();
}
class lorry implements Vehicle
{
	public void seatcapacity()
	{
		System.out.println("Seating capacity is 3");
	}
	public void ac()
	{
		System.out.println("AC not rquired");
	}
}
class car implements Vehicle
{
	public void seatcapacity()
	{
		System.out.println("Seating capacity is 6");
	}
	public void ac()
	{
		System.out.println("AC rquired");
	}
}
abstract class bus implements Vehicle
{
	public void seatcapacity()
	{
		System.out.println("Seating capacity is 50");
	}
	public abstract void ac();
}
class acbus extends bus
{
	public void seatcapacity()
	{
		System.out.println("Seating capacity is 50");
	}
	public void ac()
	{
		System.out.println("AC required");
	}
}
class nonacbus extends bus
{
	public void ac()
	{
		System.out.println("AC not required ");
	}
}
class Interfaces
{
	public static void main(String args[])
		{
				System.out.println("******* Lorry *******");
				Vehicle x= new lorry();
				x.seatcapacity();
				x.ac();
				System.out.println("******* Car *******");
				Vehicle y =new car();
				y.seatcapacity();
				y.ac();
				System.out.println("******* AC bus *******");
				Vehicle a=new acbus();
				a.seatcapacity();
				a.ac();
				System.out.println("******* Non AC bus *******");
				Vehicle n=new nonacbus();
				n.seatcapacity();
				n.ac();
		}
}