#include<stdio.h>
#include<math.h>
int fact(int x);
int main()
{
	int power;
	power=pow(2,3);
	printf("%d",power);
}
int fact(int x)
{
	if(x>=1)
	return x*fact(x-1);
	else
	return 1;
}
