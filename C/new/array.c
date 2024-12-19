#include<stdio.h>
int main()
{
	int i=0;
	int marks[5];
	marks[0]=10;
	marks[1]=20;
	marks[2]=30;
	marks[3]=40;
	marks[4]=50;
	printf("Elements of array are : \n");
	for (i=0;i<5;i++)
	{
		printf("%d \n",*(marks+i));
	}
	return 0;
}
