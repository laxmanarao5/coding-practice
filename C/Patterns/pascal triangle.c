#include<stdio.h>
int main()
{
	int bin,i,j,r,x;
	bin=0;
	printf("Enter number of rows :");
	scanf("%d",&r);
	printf("\n Pascal's trianle :\n");
	for(i=0;i<r;i++)
	{
		for(j=40-3*i;j>0;--j)
		printf(" ");
		for(x=0;x<=i;x++)
		{
		if((x==0)||(i==0))
		bin=1;
		else
		bin=(bin*(i-x+1)/x);
		printf("%6d",bin);
		}
		printf("\n");
	}
	
}
