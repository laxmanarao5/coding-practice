#include<stdio.h>
main()
{
	int n;
	float x,i,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		x=(1/i);
		sum=sum+x;
}
		printf("sum of 1/1 + 1/2 + .....+ 1/%d is %f",n,sum);
	
}
