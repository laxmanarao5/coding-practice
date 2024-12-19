#include<stdio.h>
#include<math.h>
float fact(int n);
int main()
{
	int a,n,x,i,sum=1;
	printf("Enter N value:");
	scanf("%d",&n);
	printf("Enter x value : ");
	scanf("%d",&x);
	for(i=1;i<n;i++)
	{
	a=(pow(x,i)/fact(i));
	sum=sum+a;	
	}
	printf("Sum of series is %d",sum);
	
}
float fact(int n)
{
	int i,factorial;
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
