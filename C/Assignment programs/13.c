#include<stdio.h>
float fact(int n);
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int n,i;
	float a,sum;
	sum=0;
	printf("Enter the n value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=(i/(fact(i)));
		sum=sum+a;
	}
	printf("Sum of series is %f",sum);
	return 0;
}
float fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
	
}
