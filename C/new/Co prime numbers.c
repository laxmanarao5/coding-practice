#include<stdio.h>
int gcd(int,int);
int main()
{
	int a, b, result;
    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("The GCD of %d and %d is %d.\n", a, b, result);
    if(result==1)
    	printf("Given numbers are co prime numbers : ");
    else
    	printf("Given numbers are not coprime numbers : ");
}
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			return gcd(a-b,b);
		}
		else
		{
			return gcd(a,b-a);
		}
	}
	return a;
}
