#include<stdio.h>
int main()
{
	int a[100];
	int n,i,sum;
	sum=0;
	printf("Enter number of terms :");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=((a[i-1])+(a[i-2]));
	}
	for(i=0;i<n;i++)
	{
	printf("%lld \t",a[i]);
	sum=sum+a[i];	
	}
	printf("\nSum of elements is %lld",sum);
}
