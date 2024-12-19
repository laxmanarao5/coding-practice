#include<stdio.h>
int main()
{
	int n,i,j;
    printf("Enter no of process:");
    scanf("%d",&n);
    int pid[n],at[n],bt[n],ct[n],ta[n],wt[n],f[n],k[n],pri[n];
    int st=0,tot=0;
    float avgwt=0,avgta=0;
    printf("Enter priority,arrival time,burst time :\n");
    for (i=0;i<n;i++)
    {
        printf("Process : %d\n",(i+1));
        pid[i]= i+1;
        scanf("%d",&pri[i]);
        scanf("%d",&at[i]);
        scanf("%d",&bt[i]);
		k[i]= bt[i];
        f[i]= 0;
    }
    printf("\n\nGantt chart:::");
    while(1)
    {
        int min=999,c=n;
        if (tot==n)
        break;
        for ( i=0;i<n;i++)
        {
            if ((at[i]<=st) && (f[i]==0) && (pri[i]<min))
            {
                min=pri[i];
                c=i;
            }
        }
        if (c==n)
        st++;
        else
        {
            bt[c]--;
            st++;
            if (bt[c]==0)
            {
            	printf("p%d ",c+1);
                ct[c]= st;
                f[c]=1;
                tot++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        ta[i] = ct[i] - at[i];
        wt[i] = ta[i] - k[i];
        avgwt+= wt[i];
        avgta+= ta[i];
    }   
    printf("\n\npid  arrival  burst  complete tat  waiting time\n");
    for(i=0;i<n;i++)
    {
    	printf("%d \t %d \t %d \t %d \t %d \t %d\n",pid[i],at[i],k[i],ct[i],ta[i],wt[i]);
    }
    printf("\nAverage turnaround time is %f\n\n",(avgta/n));
    printf("Average waiting time is %f",(avgwt/n));
}
