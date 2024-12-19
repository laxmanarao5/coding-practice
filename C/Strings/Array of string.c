#include<stdio.h>
#include<string.h>
int main()
{
	char name[50][20];
	int i,n;
	printf("Enter the the number of numbers : ");
	scanf("%d",&n);
		for (i=0;i<n;i++)
	{
		printf("Enter the number : ");
		scanf("%s",name[i]);
	}
	printf("Entered names are : \n");
	for(i=0;i<n;i++)
	{
		puts(name[i]);
	}
}
