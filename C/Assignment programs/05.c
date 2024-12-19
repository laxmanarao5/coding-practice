#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int a[100],n,i,large,small,range;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for (i=1;i<n;i++)
		{
			if(a[i]>large)
			large=a[i];
		}
	small=a[0];
		for (i=1;i<n;i++)
		{
			if(a[i]<small)
			small=a[i];
		}
	range=large-small;
	printf("Range is %d ",range);	
}
