#include<stdio.h>
enum year{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};
int main()
{
	int month;
	int a[12]={10,20,30,40,50,60,70,80,90,100,110,120};
	for(month=jan;month<=dec;month++)
	{
		printf("%d \t",a[month]);
	}
}
