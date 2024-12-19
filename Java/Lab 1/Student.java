import java.lang.*;
import java.util.Scanner;
class Student
{
	public static void main(String[] args)
	{
		studentinfo obj= new studentinfo();
		obj.create();
		obj.show();
		
	}
}
class studentinfo
{
		String id,name,gender,branch;
		int age,ds,p;
	void create()
	{
		
		System.out.println("Enter student details");
		Scanner sc=new Scanner(System.in);
		System.out.print(" ID : ");
		id=sc.next();
		System.out.print("Name : ");
		name=sc.next();
		System.out.print("Gender : ");
		gender=sc.next();
		System.out.print("Age : ");
		age=sc.nextInt(); 
		System.out.print("Branch : ");
		branch=sc.next();
		System.out.print("Marks in DS : ");
		ds=sc.nextInt();
		System.out.print("Percentage : ");
		p=sc.nextInt();
	}
	void show()
	{
		System.out.println();
		System.out.println();
		System.out.println();
		System.out.println("Welcome "+id+" to Java Course");
		System.out.println("Your Student Deails");
		System.out.println("Name : "+name);
		System.out.println("Gender : "+gender);
		System.out.println("Age : "+age);
		System.out.println("Branch : "+branch);
		System.out.println("DS Marks : "+ds);
		System.out.println("Percentage : "+p+"%");
		}
}