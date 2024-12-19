#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int a,b,c;
	printf("Enter the first side :");
	scanf("%d",&a);
	printf("Enter the second side :");
	scanf("%d",&b);
	printf("Enter the third side :");
	scanf("%d",&c);
	if (a==b && b==c)
	printf("Equilateral triangle.");
	else if(a==b || a==c || b==c)
	printf("Issosceles triangle.");
	else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
	printf("Right angle triangle.");
	else
	printf("Scalene triangle.");
}
