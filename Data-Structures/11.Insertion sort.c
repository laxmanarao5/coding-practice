#include<stdio.h>
int main()
{
	int a[100],n,i,temp,j;
	printf("Enter no of elemets  : ");
	scanf("%d",&n);
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Entered aaray\n");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while((temp<a[j])&& j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nSorted aray\n");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
}
