import java.util.*;

public class Question7b extends Exception{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        try{
            int age = sc.nextInt();
            if(age<19){
                throw new Question7b(); 
            }
            System.out.println("You are age is : "+age);
        }
        catch(Question7b ae){
            System.out.println("Please Enter age > 19");
        }
        catch(Exception ae){
            System.out.println("Problem");
        }
    }
}