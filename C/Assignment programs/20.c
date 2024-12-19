#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int n,a[100],i,sum=0;
	printf("Enter the N value : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element A[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Cumulative sum is ");
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		printf("%d,",sum);
	}
	
}
