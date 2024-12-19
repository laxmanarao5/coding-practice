#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int n,i;
	printf("Enter the n value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if ((i%3==0)||(i%5==0))
		{
		}
		else
		{
			printf("%d\n",i);
		}
	}
}
