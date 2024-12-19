#include<stdio.h>
int main()
{
	int i,j,a[10][10],b[10][10],d[10][10], r,c;
	printf("Enter the number of rows and columns : \t");
	scanf("%d %d",&r,&c);
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter the element b[%d][%d] = ",i,j);
		scanf("%d",&b[i][j]);	
		}
	}
	printf("\n\n\n\n");
	printf("Matrix - A :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
		}
	printf("\n");			
	}
	printf("\n \n \n \n");
	printf("Matrix - B :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",b[i][j]);
		}
	printf("\n");			
	}
	printf("\n\n\n\n");
	printf("Sum of Matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("%d \t",d[i][j]);
		}
	printf("\n");			
	}
	printf("\n\n\n\n");
	printf("Substraction of Matrix :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=b[i][j]-a[i][j];
			printf("%d \t",d[i][j]);
		}
	printf("\n");			
	}
	printf("\n\n\n\n");
	return 0;
}
