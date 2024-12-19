#include<stdio.h>
int main()
{
	int a=10,b=20;
	int* const ptr=&a;
	printf("Value at pointer is %d",*ptr);
	ptr=&b;
	printf("\n Adress pointed by ptr : %d \n",*ptr);
	return 0;
}
