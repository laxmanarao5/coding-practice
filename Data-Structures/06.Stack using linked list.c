#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*top=NULL;
int count=0;
void push()
{
	count++;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
}
void pop()
{
	count++;
	if(top==NULL)
	printf("Stack is empty\n");
	else
	{
		struct node *temp=top;
		top=temp->link;
		temp->link=NULL;
		free(temp);
	}
}
void traverse()
{
	count++;
	if(top==NULL)
	printf("Stack is empty\n");
	else
	{
		struct node *temp=top;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->link;
		}
	}
}
void peek()
{
	count++;
	if(top==NULL)
	printf("Stack is empty\n");
	else
	printf("peek element is %d",top->data);
}
int length()
{
	count++;
	struct node *temp=top;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}
int main()
{
	int choice;
	while(1)
	{
		printf("\nOperations in stack\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Peek\n");
		printf("5.Length\n");
		printf("6.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :push();
			break;
			case 2 :pop();
			break;
			case 3 :traverse();
			break;
			case 4 :peek();
			break;
			case 5 :printf("Length of stack is %d\n",length());
			break;
			case 6 :printf("Total operations are %d\n",count);
					exit(1);
			break;
			default :printf("Invalid choice \n");
		}
	}
}
