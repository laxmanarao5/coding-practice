#include<stdio.h>
void d2r(int num)
{
	int d[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	char *s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int i=0;
	while(num)
	{
		while(num/d[i])
		{
			printf("%s",s[i]);
			num-=d[i];
		}
		i++;
	}
}
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int n;
	printf("Enter the decimal number :");
	scanf("%d",&n);
	printf("Roman value is ");
	d2r(n);
}
