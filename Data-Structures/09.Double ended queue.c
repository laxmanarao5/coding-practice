#include<stdio.h>
#define max 5
int dequeue[max];
int rear=-1;
int front=-1;
void insert(int ele)
{
	if(front==0 && rear==max-1)
	printf("Dequeue is full\n");
	else if(front==-1 && rear==-1)
	{
		rear++;
		front++;
		dequeue[rear]=ele;
	}
	else if(front==0)
	{
		rear++;
		dequeue[rear]=ele;
	}
	else if(rear==max-1)
	{
		front--;
		dequeue[front]=ele;
	}
	else
	{
		int ch;
		printf("\n1.Left insetion\n2.Right insertion\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :front--;
				dequeue[front]=ele;
				break;
			case 2 : rear++;
				dequeue[rear]=ele;
				break;
			default : printf("Inavalid choice \n");
		}
	}
}
void delete()
{
	if(front==-1 && rear==-1)
	printf("Dequeue is empty\n");
	else if(front==0 && rear==0)
	{
		front=rear=-1;
	}
	else
	{
		int ch;
		printf("\n1.Left Deletion\n2.Right Deletion\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :front++;
				break;
			case 2 : rear--;
				break;
			default : printf("Inavalid choice \n");
		}
		
	}
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	printf("Dequeue is empty\n");
	else
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",dequeue[i]);
	}
}
int main()
{
	int ch;
	while(1)
	{
		int ele;
		printf("\nCircular queue operations \n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :printf("Enter data : ");
				scanf("%d",&ele);
				insert(ele);
				break;
			case 2 : delete();
				break;
			case 3 : display();
				break;
			case 4 : exit(1);
				break;
			default : printf("Invalid choice \n");
		}
	}
}
