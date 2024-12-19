#include<stdio.h>
int main()
{
	int i=0,n,arr[10];
	printf("enter the marks:");
	scanf("%d",&n);
	printf("enter the values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
