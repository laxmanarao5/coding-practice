#include<stdio.h>
int process[100][7];
int smallest(int n)
{
	int i,small=process[0][6],smallindex=0;
	for(i=0;i<n;i++)
	{
		if(process[i][6]<small)
		{
			small=process[i][6];
			smallindex=i;
		}	
	}
	return smallindex;
}
int main()
{
	int i,n;
	int small=0,start=0;
	int tsum=0,wsum=0;
	printf("Enter no of processes : ");
	scanf("%d",&n);
	int max=10000;
	for(i=0;i<n;i++)
	{
		printf("Enter PID : ");
		scanf("%d",&process[i][0]);
		printf("Enter AT : ");
		scanf("%d",&process[i][1]);
		process[i][6]=process[i][1];
		printf("Enter BT : ");
		scanf("%d",&process[i][2]);
	}
	for(i=0;i<n;i++)
	{
		small=smallest(n);
		if(process[small][6]>start)
		{
			start=process[small][6];
		}
		start=start+process[small][2];
		process[small][6]=max;
		process[small][3]=start;
		process[small][4]=process[small][3]-process[small][1];
		process[small][5]=process[small][4]-process[small][2];
		tsum=tsum+process[small][4];
		wsum=wsum+process[small][5];
		printf("P%d \t",small+1);
	}
	printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\t%d\n",process[i][0],process[i][1],process[i][2],process[i][3],process[i][4],process[i][5]);
	}
	float a=tsum;
	float b=wsum;
	float c=n;
	printf("\n\nAverage Waiting time : %0.2f",b/c);
	printf("\n\nAverage Turn Around Time time : %0.2f",a/c);
}
