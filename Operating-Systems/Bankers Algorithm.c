#include<stdio.h>
int allocated[100][100];
int available[100];
int max[100][100];
int need[100][100];
int n,m;
int compare(int p)
{
	int i,count=0;
	for(i=0;i<m;i++)
	{
		if(need[p][i]<=available[i])
		count++;
	}
	if(count==m)
	return 1;
	else
	return 0;
}
int main()
{
	//Taking number of processes
	printf("Enter number of process : ");
	scanf("%d",&n);
	//Taking number of resources
	printf("Enter number of resources : ");
	scanf("%d",&m);
	int i,j,count=0;
	int sum[m];
	int resources[m];
	int process[n][2];
	//making sum array to 0 for calculating total allocated
	for(i=0;i<m;i++)
	{
		sum[i]=0;
	}
	//Taking resources as input
	for(i=0;i<m;i++)
	{
		printf("Enter intances of R%d  : ",i);
		scanf("%d",&resources[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter PID : ");
		scanf("%d",&process[i][0]);
		process[i][1]=0;
		printf("Enter maximum required resources : ");
		for(j=0;j<m;j++)
		{
			scanf("%d",&max[i][j]);
		}
		printf("Enter allocated resources : ");
		for(j=0;j<m;j++)
		{
			scanf("%d",&allocated[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		//Need matrix
		for(j=0;j<m;j++)
		{
			need[i][j]=max[i][j]-allocated[i][j];
			sum[j]=sum[j]+allocated[i][j];
		}
	}
	//Available resources 
	for(i=0;i<m;i++)
	{
		available[i]=resources[i]-sum[i];
	}
	for(i=0;i<=n;i++)  // please be carefull edited here
	{
		if(process[i][1]==0)
		{
			if(compare(i))
			{
				printf("P%d \t",i);
				process[i][1]=1;
				count++;
				for(j=0;j<m;j++)
				{
					available[j]=available[j]+allocated[i][j];
				}
			i=0;	
			}
		}
	}
if(count==n)
	printf("Safe state");
else
	printf("Unsafe state");
}
