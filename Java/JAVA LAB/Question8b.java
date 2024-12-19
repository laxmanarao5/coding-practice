import java.lang.*;
import java.util.*;
class Encaptulation
{
    private String name;
    private int roll_no;
    private int age;
    public String getname()
    {
        return name;
    }
    public int getroll()
    {
        return roll_no;
    }
    public int getage()
    {
        return age;
    }
    public void setname(String a)
    {
        name=a;
    }
    public void setrollno(int a)
    {
        roll_no=a;
    }
    public void setage(int a)
    {
        age=a;
    }
}
class Question8b
{
    public static void main(String args[])
    {
        Scanner scan =new Scanner(System.in);
        Encaptulation obj=new Encaptulation();
        System.out.print("Enter name : ");
        String name =scan.next();
        System.out.print("Enter age : ");
        int age =scan.nextInt();
        System.out.print("Enter Roll No : ");
        int roll_no =scan.nextInt();
        obj.setname(name);
        obj.setage(age);
        obj.setrollno(roll_no);
        System.out.println("Name : "+obj.getname());
        System.out.println("Age : "+obj.getage());
        System.out.println("Roll No : "+obj.getroll());

    }
}