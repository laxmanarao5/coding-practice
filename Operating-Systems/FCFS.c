#include<stdio.h>
struct process
{
	char pid[10];
	int at,bt,ct,tat,wt,at_d;
};
int main()
{
	int n,i,j,wsum=0,tsum=0;
	printf("Enter no of processes : ");
	scanf("%d",&n);
	struct process p[n];
	for(i=0;i<n;i++)
	{
		printf("Enter process ID : ");
		scanf("%s",&p[i].pid);
		printf("Enter Arrival Time : ");
		scanf("%d",&p[i].at);
		printf("Enter Burst Time : ");
		scanf("%d",&p[i].bt);
		p[i].at_d=p[i].at;
	}
	int small=0,max=0,maximum;
	for(i=0;i<n;i++)
	{
		if(p[small].at>p[i].at)
		{
			small=i;
		}
		if(p[small].at<p[i].at)
		{
			max=i;
		}
	}
	maximum=p[i].at+10;
	int start=p[small].at;
	for(i=0;i<n;i++)
	{
	small=0;
		for(j=0;j<n;j++)
		{
			if(p[small].at>p[j].at)
			{
				small=j;
			}
		}
	start=start+p[small].bt;
	printf("%s\t",p[small].pid);
	p[small].at=maximum;
	p[small].ct=start;
	p[small].tat=p[small].ct-p[small].at_d;
	p[small].wt=p[small].tat-p[small].bt;
	wsum=wsum+p[small].tat;
	tsum=tsum+p[small].wt;
	}
	printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t",p[i].pid);
		printf("%d\t",p[i].at_d);
		printf("%d\t",p[i].bt);
		printf("%d\t",p[i].ct);
		printf("%d\t",p[i].tat);
		printf("%d\n",p[i].wt);
	}
	double waiting=wsum;
	double tatsum=tsum;
	printf("Average Turn Around Time is %0.2f\n",waiting/n);
	printf("Average Waiting Time is %0.2f",tatsum/n);
}
