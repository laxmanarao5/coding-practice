#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node
{
	int data;
	struct node *link;
}*root=NULL;
int len;
int count=0;
void append()
{
	count++;
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&new->data);
	new->link=NULL;
	if(root==NULL)
	{
		root=new;
		new->link=root;
	}
	else
	{
	struct node *temp;
	temp=root;
	while(temp->link!=root)
	{
		temp=temp->link;
	}
	temp->link=new;
	new->link=root;
	}
}
void addatbegining()
{
	count++;
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&new->data);
	new->link=NULL;
	if(root==NULL)
	{
		root=new;
		new->link=root;
	}
	else
	{
		struct node *k=root;
		while(k->link!=root)
		{
			k=k->link;
		}
		new->link=root;
		root=new;
		k->link=root;
	}
}
int length()
	{
		count++;
		int l=0;
		struct node *k;
		k=root;
		while(k->link!=root)
		{
			l++;
			k=k->link;
		}
		l++;
		return l;
	}
void addafter()
{
	count++;
	int loc;
	printf("Enter location : ");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("Invalid location \n");
	}
	else
	{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&new->data);
	new->link=NULL;
		struct node *k;
		k=root;
		int i=1;
		while(i<loc)
		{
			k=k->link;
			i++;
		}
		new->link=k->link;
		k->link=new;
	}
}
void display()
{
	count++;
	if(root==NULL)
	{
		printf("There are no nodes to display \n");
	}
	else
	{
		struct node *k;
		k=root;
		while(k->link!=root)
		{
			printf("%d-->",k->data);
			k=k->link;
		}
		printf("%d",k->data);	
	}
}
void delete()
{
	count++;
	int loc;
	printf("Enter location :");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("Invalid location \n");
	}
	else if(loc==1)
	{
		struct node *l,*k;
		l=root;
		k=root;
		while(k->link!=root)
		{
			k=k->link;
		}
		root=l->link;
		l->link=NULL;
		k->link=root;
		free(l);
	}
	else
	{
		struct node *l,*k;
		l=root;
		k=root;
		int i=1;
		while(i<loc-1)
		{
			l=l->link;
		}
		k=l->link;
		l->link=k->link;
		k->link=NULL;
		free(k);
		
	}
}
int search()
{
	count++;
	int a;
	printf("Enter element to search : ");
	scanf("%d",&a);
	struct node *k=root;
	while(k->link!=root)
	{
		if(k->data==a)
		return 1;
		k=k->link;
	}
	if(k->data==a)
	return 1;
	return 0;
}
void main()
{
	int choice;
	while(1)
	{
		printf("\nOperations in Circular linked list \n");
		printf("1.Append \n");
		printf("2.Add at begining \n");
		printf("3.Add after \n");
		printf("4.Delete \n");
		printf("5.Length \n");
		printf("6.Display \n");
		printf("7.Search\n");
		printf("0.Exit \n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : append();
						break;
			case 2 : addatbegining();
						break;
			case 3 : addafter();
						break;
			case 4 : delete();
						break;
			case 5 : len=length();
					printf("Length of linked list is %d\n",len);
						break;
			case 6 : display();
						break;
			case 7 : if(search())
					printf("Data found in linked list\n");
					else
					printf("Data not found in linked list\n");
					break;
			case 0 : printf("Total operations are %d",count);
					exit(1);
						break;
			default : printf("Invalid choice \n");
		}
	}
}
