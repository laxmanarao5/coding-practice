#include<stdio.h>
#include<math.h>
float fact(int n);
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	float a,i,sum=1;
	int x,n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter the value of x : ");
	scanf("%d",&x);
	for(i=1;i<n;i++)
	{
		a=(pow(x,i)/fact(i));
		sum=sum+a;
	}
	printf("value of e^x is %f",sum);
}
float fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}
