#include<stdio.h>
int main()
{
int n,k=1;
	int i,j,count1=0;
	printf("Enter the n value : ");
	scanf("%d",&n);
	int a[n];
	int count;
	for(i=1;i<=10000;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count=count+1;
		}
		if(count==2)
		{
		count1=count1+1;
		a[count1]=i;
		}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(i<(2*n-j+1))
			printf(" ");
			else
			printf("%d ",(a[k++]));
		}
		printf("\n");
	}
}
}
