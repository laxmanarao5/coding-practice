#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int ele)
{
	if((front==0 && rear==max-1) ||(front==rear+1))
	printf("Queue is full\n");
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		queue[rear]=ele;
	}
	else if(front!=0 && rear==max-1)
	{
		rear=0;
		queue[rear]=ele;
	}
	else
	{
		rear++;
		queue[rear]=ele;
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	printf("Queue is empty\n");
	else if(front==0 && rear==0)
	{
		front=rear=-1;
	}
	else if(front==max-1)
	{
		front=0;
	}
	else
	front++;
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	printf("Queue is empty\n");
	else if(front<rear)
	{
		for(i=front;i<=rear;i++)
		printf("%d \t",queue[i]);
	}
	else
	{
		for(i=front;i<=max-1;i++)
		printf("%d\t",queue[i]);
		for(i=0;i<=rear;i++)
		printf("%d\t",queue[i]);
	}
}
int main()
{
	int ch;
	while(1)
	{
		int ele;
		printf("\nCircular queue operations \n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :printf("Enter data : ");
				scanf("%d",&ele);
				enqueue(ele);
				break;
			case 2 : dequeue();
				break;
			case 3 : display();
				break;
			case 4 : exit(1);
				break;
			default : printf("Invalid choice \n");
		}
	}
}
