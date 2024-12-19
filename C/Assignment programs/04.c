#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	printf("%d is a leap year.",year);
	else
	printf("%d is not a leap year.",year);
}
