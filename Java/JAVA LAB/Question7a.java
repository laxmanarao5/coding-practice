import java.lang.*;
import java.util.*;
class Question7a
{
    public static void main(String args[])
    {
        try
        {
            int array[]={10,20,30,40,50,0};
            System.out.print("Enter index : ");
            Scanner scan=new Scanner(System.in);
            int n =scan.nextInt();
            System.out.println("Value at entered index  : "+array[n]);
            System.out.println(array[0]/array[n]);
        }
        catch(ArithmeticException ae)
        {
            System.out.println("We cannot divide any number with zero");
        }
        catch(ArrayIndexOutOfBoundsException ae)
        {
            System.out.println("The array contains only six elements");
        }
    }
}