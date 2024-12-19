#include<stdio.h>
int main()
{
printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int a[100],i,n,esum=0,osum=0;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		esum=esum+a[i];			//esum means sum of even numbers
		else
		osum=osum+a[i];			//osum means sum of odd numbers
	}
	printf("Sum of Even numbers : %d \n",esum);
	printf("Sum of odd numbers : %d",osum);
}
