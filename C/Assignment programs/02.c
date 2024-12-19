#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int year,ref_year=1900,diff_year,l_year,day,total_days,n_year;
	printf("Enter a year : ");
	scanf("%d",&year);
	diff_year=year-ref_year;
	l_year=diff_year/4;
	n_year=diff_year-l_year;
	total_days=((n_year*365)+(l_year*366));
	day=total_days%7;
	printf("January 1st of %d is",year);
	if(day==0)
		printf("\n Monday \n");
	else if(day==1)
		printf("Tues day \n");
	else if(day==2)
		printf("Wednesday \n");
	else if(day==3)
		printf("Thursday \n");
	else if(day==4)
		printf("Friday \n");
	else if(day==5)
		printf("Saturday \n");
	else if(day==6)
		printf("Sunday \n");
}
