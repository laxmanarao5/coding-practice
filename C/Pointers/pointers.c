#include<stdio.h>
int main()
{
	int *a;
	int b=10;
	a=&b;
	printf("%d",a);
	printf("\n%d",*a);
}
