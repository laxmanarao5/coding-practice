#include<stdio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int d_num,rem[50],rem2[50],i=0,k=0,length=0,length2=0;
	printf("Enter decimal number : ");
	scanf("%d",&d_num);
	while(d_num>0)
	{
		rem[i]=d_num%8;
		d_num=d_num/8;
		i++;
		length++;
	}
	printf(" Octal number is ");
	for(i=length-1;i>=0;i--)
	{
		printf("%d",rem[i]);
	}
	while(d_num>0)
	{
		rem2[k]=d_num%16;
		d_num=d_num/16;
		k++;
		length2++;
	}
	for(i=0;i<length2;i++)
	{
		printf("%d",rem2[i]);
	}
	printf("\nHexadecimal is");
	for(i=length2-1;i>=0;i--)
	{
		printf("\n%d\n",rem2[i]);
		switch(rem2[i])
		{
			case 10: printf("A");
				break;
			case 11 : printf("B");
				break;
			case 12 : printf("C");
				break;
			case 13 : printf("D");
				break;
			case 14 : printf("E");
				break;
			case 15 : printf("F");
				break;
			default : printf("%d",rem2[i]);
		}
	}
}
