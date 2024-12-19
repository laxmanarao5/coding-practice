#include<stdio.h>
#define z 5
int queue[z];
int front=-1;
int rear=-1;
void enqueue()
{
	if(rear==z-1)
	printf("Queue is full");
	else if(rear==-1 && front==-1)
	{
		rear=front=0;
		printf("Enter data : ");
		scanf("%d",&queue[rear]);
	}
	else
	{
		rear++;
		printf("Enter data : ");
		scanf("%d",&queue[rear]);
	}
}
int isempty()
{
	if(rear==-1)
	return 1;
	else
	return 0;
}
void dequeue()
{
	if(isempty())
	printf("Queue is empty");
	else if(rear==0 && front==0)
	{
		rear=front=-1;
	}
	else
	front++;
}
void display()
{
	if(isempty())
	printf("Queue is empty");
	else
	{
		int i;
		for(i=front;i<=rear;i++)
			printf("%d \t",queue[i]);
	}
}
void peek()
{
	if(isempty())
	printf("Queue is empty");
	else
	printf("%d",queue[front]);
}
int main()
{
	int ch;
	while(1)
	{
		printf("\nQueue Operations\n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : enqueue();
			break;
			case 2 : dequeue();
			break;
			case 3 : display();
			break;
			case 4 : peek();
			break;
			case 5 : exit(1);
			break;
			default : printf("Inavalid choice");
		}
	}
}
