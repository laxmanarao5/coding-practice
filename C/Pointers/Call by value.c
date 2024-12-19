#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("Before swapping =%d %d \n ",a,b);
}
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("After swapping = %d %d ",x,y);
	
}
