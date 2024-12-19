#include<stdio.h>
int sum(int);
int main()
{
	int n,result;
	printf("enter the number : ");
	scanf("%d",&n);
	result=sum(n);
	printf("sum of %d numbers is %d",n,result);

}
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
