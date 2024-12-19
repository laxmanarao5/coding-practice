#include<stdio.h>
main()
{
	int a,i,j;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if (i==1 || i==a || j==1 || j==a)
			printf("*");
			else if(i==j || j==a-j+1)
			printf("$");
			else
			printf(" ");
			
			
		}
	printf("\n");	
	}
	return 0;
}
