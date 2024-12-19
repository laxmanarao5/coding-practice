#include<stdio.h>
using namespace std;
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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nSorted aray\n");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
}
