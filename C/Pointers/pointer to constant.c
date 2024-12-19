#include<stdio.h>
main()
{
	int a=10;
	const int *p;
	p=&a;
	*p=11;
	printf("%d",*p);
}
