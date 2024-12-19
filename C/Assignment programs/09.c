#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int n;
	printf("Enter number of days : ");
	scanf("%d",&n);
	if(n<=5)
	printf("you are fined 50 paise.");
	else if(n>5 && n<=10)
	printf("You are fined 1 rupee.");
	else if(n>10 && n<=30)
	printf("You are fined 5 rupees.");
	else
	printf("Your membership is cancelled.");
}
