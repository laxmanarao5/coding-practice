#include<stdio.h>
main()
{
	int n;
	float x,i,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		x=(i/(i+1));
		sum=sum+x;
}
		printf("sum of series is %f",sum);
	
}
