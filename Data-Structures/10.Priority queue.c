#include<stdio.h>
#include<stdlib.h>
#define max 10
int queue[max];
struct node
{
	int data;
	int priority;
	struct node *link;
};
struct node *front=NULL;
void insert()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&temp->data);
	printf("Enter Priority : ");
	scanf("%d",&temp->priority);
	temp->link=NULL;
	if(front==NULL)
	{
		temp->link=front;
		front=temp;
	}
	else if(temp->priority<front->priority)
	{
		temp->link=front;
		front=temp;
	}
	else
	{
		struct node *q=front;
		while(q->link==NULL && temp->priority<q->priority)
		{
			q=q->link;
		}
		temp->link=q->link;
		q->link=temp;
	}
}
void del()
{
	struct node *p=front;
	if(front==NULL)
	printf("Queue is empty\n");
	else
	{
		printf("%d is deleted\n",p->data);
		front=front->link;
		free(p);
	}
}
void display()
{
	if(front==NULL)
	printf("Queue is empty\n");
	else{
		struct node *p=front;
		while(p!=NULL)
		{
			printf("%d \t",p->data);
			p=p->link;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\nPriority queue operations\n");
		printf("1.Insert\n2.Delete\n3.Display\n");
		printf("4.Exit\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : insert();
			break;
			case 2 : del();
			break;
			case 3 : display();
			break;
			case 4 : exit(1);
			break;
			default: printf("Invalid option\n"); 
		}
	}
}
