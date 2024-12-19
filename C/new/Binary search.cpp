#include<stdio.h>
int main()
{
	int i,n,low,high,num,mid,arr[10];
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched : ");
	scanf("%d",&num);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(num<arr[mid])
		{
		high=mid-1;
		}
		else if(num>arr[mid])
		{
			low=mid+1;
		}
		else if(num==arr[mid])
		{
			printf("%d is found",num);
			break;
		}
	}
	if(num!=arr[mid])
	{
		printf("%d is not found",num);
	}
	return 0;
}
