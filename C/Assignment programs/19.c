#include<stdio.h>

int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int a[10],b[10],c[20],i,k=0,n;
	for(i=0;i<10;i++)
	{
		printf("Enter element of array A : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
		{
		printf("Enter element of array B : ");
		scanf("%d",&b[i]);
		}
		for(i=0;i<10;i++)
		{
			c[i]=a[i];
		}
	for(i=10;i<20;i++)
		{
		c[i]=b[k];
		k++;	
		}
	for(i=0;i<20;i++)
	{
		printf("%d \t",c[i]);
	}
	
}

