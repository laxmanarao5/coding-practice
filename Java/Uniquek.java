import java.lang.*;
import java.util.Scanner;
class Power
{
	int power(int x,int n)
	{
		int res=1;
		for(int i=0;i<n;i++)
		res=res*x;
		return res;
	}
}
class Fact
{
	int fact(int n)
	{
		int i,result=1;
		for(i=1;i<=n;i++)
		{
			result=result*i;
		}
		return result;
	}
}
class ReadMdigit
{
	int k,l,num,i,j,p,rem,c,zc,count=0,countnot,countre;
	Power po=new Power();
	void read()
	{
		Scanner sc=new Scanner(System.in);
		Fact f=new Fact();
		Power po=new Power();
		System.out.print("Enter the number : ");
		num=sc.nextInt();
		System.out.print("Enter value of k : ");
		k=sc.nextInt();
		int[] countArray={0,0,0,0,0,0,0,0,0,0};
		p=num;
		c=0;
		int q;
		while(p!=0)
		{
			rem=p%10;
			countArray[rem]++;
			c++;
			p=p/10;
		}
		for(i=1;i<10;i++)
		{
			if(countArray[i]>1)
			count++;
		}
		// finding  k digit number
		if(k>c)
			System.out.println("Not possible");
		else
		{
			if(countArray[0]>0)
			{
				zc=countArray[0];
				if(zc==1)
				q=0;
				else
				q=zc-1;
				countnot=((c-zc)*(f.fact(c-1))/(f.fact(count)));
				countre=(c-zc)*(po.power(k,c-count-q));
				System.out.println(countnot+" times without repetition");
				System.out.println(countre+" times with repetition");
			}
			else
			{
				countnot=(f.fact(c-1))/(f.fact(count));
				countre=(po.power(k,c-count));
				System.out.println(countnot+" times without repetition");
				System.out.println(countre+" times with repetition");
			}
		}

	}
}

class Uniquek
{
	public static void main(String k[])
	{
		ReadMdigit ob = new ReadMdigit();
		ob.read();
	}
}