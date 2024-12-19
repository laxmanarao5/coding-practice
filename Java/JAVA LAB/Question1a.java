import java.lang.*;
import java.util.*;
class Question1a
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter student ID : ");
        String id=sc.next();
        System.out.print("Enter student Name : ");
       String name=sc.next();
        System.out.print("Enter Gender : ");
        String gender=sc.next();
        System.out.print("Enter Branch : ");
        String branch=sc.next();
        System.out.print("Enter Age  : ");
        int age=sc.nextInt();
        System.out.print("Marks in DS : ");
        int marks=sc.nextInt();
        System.out.println();
        System.out.println("Welcome to "+id+" Java Course");
        System.out.println("Name : "+name);
        System.out.println("Gender : "+gender);
        System.out.println("Branch : "+branch);
        System.out.println("Age : "+age);
        System.out.println("Percentage of Marks in DS : "+marks+"%");
    }
}