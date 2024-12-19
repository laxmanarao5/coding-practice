#include<stdio.h>
int fact(int n);
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int num,arr[100],j=0,a,n,rem,count=0,i,sum=0;
	printf("Enter a number : ");
	scanf("%d",&a);
	n=a;
	num=a;
	while(a!=0)
	{
		a=a/10;	
		count=count+1;
	}
	while(n!=0)
	{
		rem=n%10;
		arr[j]=rem;
		n=n/10;
		j++;
	}
	for(i=0;i<=count;i++)
	{
		sum=(sum+(fact(arr[i])));
	}
	if(sum==num)
	printf("Given number is a strong number.");
	else
	printf("Given number is not a strong number.");
}
int fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}
