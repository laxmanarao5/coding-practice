#include<stdio.h>
int main()
{
	int n,i,j;
	int tot=0,st=0;
	float avgwt=0,avgtat=0;
	printf("Enter number of process:");
	scanf("%d",&n);
	int p[n];
	int at[n];
	int bt[n],ct[n],tat[n],wt[n],f[n];
	printf("Enter arrival and burst time values:\n");
	for(i=0;i<n;i++)
	{
		printf("process %d :",i+1);
		scanf("%d",&at[i]);
		scanf("%d",&bt[i]);
		p[i]=i+1;
		f[i]=0;
	}
	printf("\n\nGantt chart:::  ");
	while(1)
	{
		int c=n,min=999;
		int i;
		if(tot==n) 
		break;
		for(i=0; i<n; i++)
		{
			if((at[i] <= st) && (f[i] == 0) && (bt[i]<min))
			{
				min=bt[i];
				c=i;
			}
		}
		if (c==n)
		st++;
		else
		{
			printf("p%d  " ,c+1);
			ct[c]=st+bt[c];
			st+=bt[c];
			tat[c]=ct[c]-at[c];
			wt[c]=tat[c]-bt[c];
			f[c]=1;
			tot++;
		}
	}
	printf("\npid   arrival  burst   complete  tat  wt\n");
	printf("\n---   -------  -----   --------  ---  --\n");
	for(i=0;i<n;i++)
	{
		avgwt+=wt[i];
		avgtat+=tat[i];
		printf("%d \t %d \t %d \t %d \t %d \t %d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
	}
	printf("\nAverage turnaround time is %f\n\n", (avgtat/n));
	printf("Average waiting time is %f", (avgwt/n));
}
