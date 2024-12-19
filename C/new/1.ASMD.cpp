#include<stdio.h>
main()
{
	int a,b,n,sum,sub,mult,div;
	printf("Enter values of a and b:");
	scanf("%d %d",&a,&b);
	printf("MENU \n");
	printf(" 1 - Addition \n 2 - Substraction \n 3 - Multiplication \n 4 - Division \n");
	printf("Enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1 : sum = a+b;
			printf("%d",sum);
			break;
		case 2 : sub = a-b;
			printf("%d",sub);
			break;
		case 3 : mult = a*b;
			printf("%d",mult);
			break;
		case 4 : div = a/b;
			printf("%d",div);
			break;
		default : 
			printf("Invalid Input");
	}
	return 0;
}
