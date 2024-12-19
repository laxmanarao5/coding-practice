#include<stdio.h>
main()
{
	int num1,num2,num3,result;
	int addition(int,int,int);			//function declaration
	printf("Enter num1,num2,num3 :");
	scanf("%d%d%d",&num1,&num2,&num3);
	result=addition(num1,num2,num3);	//calling function
	printf("SUM = %d",result);
}
int addition(int a,int b,int c)		//called function
{
	return(a+b+c);
}
