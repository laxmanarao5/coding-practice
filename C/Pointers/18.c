#include<stdio.h>
int main()
{
	int i,j,max=0,count=0,maxelement,a[100],n;
	printf("Enter number of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			count=count+1;
			
			if(count>max)
		max=count;
		
		
		maxelement=a[i];
}
	}
	printf("maximum repeated element is %d",maxelement);
}
