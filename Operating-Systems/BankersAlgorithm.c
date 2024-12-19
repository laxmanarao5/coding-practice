#include<stdio.h>
int main()
{
	int n,i,j,r;
	printf("Enter number of process:");
	scanf("%d",&n);
	printf("Enter number of resources:");
	scanf("%d",&r);
	int sum=0;
	int ar[r],alloc[n][r],maxneed[n][r],need[n][r],f[n],temp[r];
	for(i=0;i<n;i++)
	{
		f[i]=0;
		printf("Enter allocation  values of process %d :",i+1);
		for(j=0;j<r;j++)
		{	
			scanf("%d",&alloc[i][j]);
		}
		printf("Enter Maximum need  values of process %d:",i+1);
		for(j=0;j<r;j++)
		{	
			scanf("%d",&maxneed[i][j]);
			need[i][j]=maxneed[i][j]-alloc[i][j];
			sum+=need[i][j];
			if(need[i][j]<0)
			{
				printf("you have entered a wrong input.Allocation should less than max need.");
				printf("Deadlock occurs.");
				return 0;
			}
		}
	}
	printf("Enter available resources::");
	int ch=0;
	for(i=0;i<r;i++)
	{ 
		scanf("%d",&ar[i]);
		if(ar[i]<=0)
			ch++;
	}
	if(ch==r && sum>0){
		printf("No available resources.Deadlock occurs");
		return 0;
	}
	int tot=0;
	printf("Need::\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",need[i][j]);
		}
		printf("\n");
	}
	int c=0;
	while(1)
	{
		int t=0;
		if(tot==n)
			break;
		for(i=0;i<n;i++)
		{
			t=0;
			for(j=0;j<r;j++)
			{
				if(f[i]==0 && need[i][j]<=ar[j]){
					t++;
				}
			}
			if(t==r){
				break;
			}
		}
		if(t==r)
		{
			printf("process %d\n",(i));
			f[i]=1;
			tot++;
			for(j=0;j<r;j++){
				temp[j]=ar[j]-need[i][j];
			}
			for(j=0;j<r;j++){
				ar[j]=temp[j]+maxneed[i][j];
			}
		}
		else{
			c=1;
			break;
		}
	}
	if(c==1)
		printf("Deadlock occured.");

}
