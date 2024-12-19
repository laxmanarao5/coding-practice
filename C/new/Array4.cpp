#include<stdio.h>
int main()
{
	int i=0,n,arr[10],sum=0;
	float avg;
	printf("enter the number of subjects:");
	scanf("%d",&n);
	printf("enter the marks:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];	
	}
	avg=sum/n;
	printf("Total marks : %d \n",sum);
	printf("Average : %f",avg);
	return 0;
}
