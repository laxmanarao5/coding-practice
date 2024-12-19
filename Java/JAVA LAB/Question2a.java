import java.lang.*;
import java.util.*;
class NumberToWord
{
	String onetoten[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	String tentotwenty[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
	String tenmultiples[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	void textFormat(int temp)
	{
		if(temp/10>0)
		{
			textFormat(temp/10);//Recursive calling util number become zero
		}
		System.out.print(onetoten[temp%10]+" ");//printing each digit in text format
	}

	void wordFormat(int temp)
	{
		if(temp>=1000)
		{
			System.out.print(onetoten[temp/1000]+" thousand ");//To print the no.of Thousands
			temp %=1000;//To calculate remaining number
		}
		if(temp>=100)
		{
			System.out.print(onetoten[temp/100]+" hundred ");//To print the no.of Hundreds
			temp %=100;//To calculate remaining number
		}
		if(temp>=20)
		{
			System.out.print(tenmultiples[temp/10]+" ");	//To print the twenty,thirty,forty.....
			temp %=10;//To calculate remaining number  
		}
		if(temp>=10)
		{
			System.out.print(tentotwenty[temp%10]+" ");//To print the eleven,twelve,thirteen,fourteen,...
			temp=0;//With above printing number is completed
		}
		if(temp>=1)
		{
			System.out.print(onetoten[temp%10]+" ");//To print the one,two,three.....
		}
	}
}
public class Question2a{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a number less than 10,000 :");
		int number =scan.nextInt();
		NumberToWord obj=new NumberToWord();
		if(number<10000)
		{
			System.out.print("\nText format "+number+" - ");
			obj.textFormat(number);

			System.out.print("\nWord format "+number+" - ");
			obj.wordFormat(number);
		}
		else
			System.out.print("Sorry,Invalid Input\n\tEnter number below.. 10K and above 0");

	}
}
