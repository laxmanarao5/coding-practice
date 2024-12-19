#include<stdio.h>
main()
{
	int i,n,c,a,b;
	a=0;
	b=1;
	printf("Enter number of terms:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%d \n",a);
		c=a+b;
		a=b;
		b=c;
	}
return 0;	
}
