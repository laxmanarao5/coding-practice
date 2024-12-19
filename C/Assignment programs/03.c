#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\nNAME  : B.Laxmanarao \nID NO : S170116 \nCLASS : CSE-1D \n");
	int a,b,c,product,s,m,l,n;
	printf("Enter any three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("MENU \n");
	printf("1 - Product \n2 - Small number \n3 - Middle number \n4 - Large number \n");
	printf("Enter your choice :");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
			product=a*b*c;
			printf("Product of  three numbers : %d",product);
			break;
		case 2 :
			if (a<b && a<c)
			printf("%d",a);
			else if (b<c && b<a)
			printf("%d",b);
			else
			printf("%d",c);
			break;
		case 3 : 
			if((a<c && a>b) || (a>c && a<b))
			printf("%d",a);
			else if ((b<a && b>c)|| (b>a && b<c))
			printf("%d",b);
			else
			printf("%d",c);
			break;
		case 4 : 
			if (a>b && a>c)
			printf("%d",a);
			else if (b>c && b>a)
			printf("%d",b);
			else
			printf("%d",c);
			break;
		default :
			printf("Invalid input");
	}
}
