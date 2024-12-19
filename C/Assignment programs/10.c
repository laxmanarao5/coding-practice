#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int a,b;
	printf("Enter marks in subjest A : ");
	scanf("%d",&a);
	printf("Enter marks in subject B : ");
	scanf("%d",&b);
	if(a>=55 && b>=45)
	printf("You are qualified.");
	else if((45<a<55)&&(b>=55))
	printf("You are qualified.");
	else if(b<45 && a>=65)
	printf("You have to reappear the examination B.");
	else
	printf("You are failed.");
}
