#include<stdio.h>
#define capacity 10
int stack[capacity];
int top=-1;
int count=0;
int isfull()
{
	if(top==capacity-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void push()
{
	count++;
	if(isfull())
	printf("Stack is full \n");
	else
	{
		int ele;
		printf("Enter Element : ");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;
	}
}
void pop()
{
	count++;
	if(isempty())
	{
		printf("Stack is Empty \n");
	}
	else
	{
		top--;
	}
}
void traverse()
{
	count++;
	if(isempty())
	printf("Stack is empty  \n");
	else
	{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d \t",stack[i]);
		}
	}
}
void peek()
{
	count++;
	if(isempty())
	{
		printf("Stack is empty \n");
	}
	else
	{
		printf("%d \n",stack[top]);
	}
}
int length()
{
	count++;
	int a=top;
	a++;
	return a;
}
int main()
{
	int choice;
		while(1)
		{
			printf("\noprations:\n");
			printf("1.Push\n");
			printf("2.POP\n");
			printf("3.Display\n");
			printf("4.Top\n");
			printf("5.Length\n");
			printf("0.exit\n");
			printf("enter your choice:");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1: push();
				break;
				case 2:pop();
				break;
				case 3:traverse();
				break;
				case 4: peek();
				break;
				case 5:printf("Length of stack is %d \n",length());
				break;
				case 0: printf("Total operations are %d",count);
						exit(1);
				break;
				default : printf("invalid choice:");
			}
		}
}

