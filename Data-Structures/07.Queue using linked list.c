#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*front=NULL,*rear=NULL;
void enqueue()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data  : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(rear==NULL)
	front=rear=temp;
	else
	{
		rear->link=temp;
		rear=rear->link;
	}
}
void dequeue()
{
	if(front==NULL)
	printf("Queue is empty");
	else
	{
		struct node *p=front;
		front=front->link;
		free(p);
	}
}
void display()
{
	if(front==NULL)
	printf("Queue is empty");
	else
	{
	struct node *p=front;
	while(p!=NULL)
	{
	printf("%d \t",p->data);
	p=p->link;	
	}	
	}	
}
void peek()
{
	if(front==NULL)
	printf("Queue is empty");
	else
	printf("%d",front->data);
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
