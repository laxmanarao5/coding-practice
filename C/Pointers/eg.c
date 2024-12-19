#include<stdio.h>
int main()
{
	int a;
	int *p;
	int **q;
	a=3000;
	p=&a;
	q=&p;
	printf("Value of a =%d \n",a);
	printf("Value available at *p=%d \n",*p);
	printf("Value available at **q=%d",**q);
	return 0;
}
