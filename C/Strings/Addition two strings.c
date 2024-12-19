#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	int n;
	printf("Enter the string1 : ");
	gets(a);
	printf("Enter the string2 : ");
	gets(b);
	strcat(a,b);
	printf(" %s ",a);
	getch();
}
