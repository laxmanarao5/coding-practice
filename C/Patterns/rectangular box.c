#include<stdio.h>
int main()
{
	int c,r,i,j;
	printf("Enter no of rows and columns : ");
	scanf("%d %d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==1 || i==r || j==1 || j==c)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
