#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int a,rem,count=0,i,sum=0;
	printf("Enter a number : ");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		sum=sum+rem;
		a=a/10;	
	}
	printf("Sum of digits is %d",sum);
}
