#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
	int data;
	struct node *left;
	struct node *right;
}*root=NULL;
void append()
{
	count++;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	root=temp;
	else
	{
		struct node *p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->left=p;
		p->right=temp;
	}
}
void addatbegining()
{
	count++;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	root=temp;
	else
	{
		root->left=temp;
		temp->right=root;
	}
}
int length()
{
	count++;
	int count=0;
	struct node *p=root;
	while(p!=NULL)
	{
		count++;
		p=p->right;
	}
	return count;
}
void addafter()
{
	count++;
	int loc,len;
	len=length();
	printf("Enter location : ");
	scanf("%d",&loc);
	if(loc>len)
	printf("Invalid location");
	else
	{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter data : ");
		scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
		struct node *p=root;
		int i=1;
		while(i<loc)
		{
			p=p->right;
		}
		p->right->left=temp;
		temp->left=p;
		p->right=temp;
	}
}
void delete()
{
	count++;
	int loc,len;
	len=length();
	printf("Enter location : ");
	scanf("%d",&loc);
	if(root==NULL)
	printf("No data to delete");
	else if(loc>len)
	printf("Invalid location");
	else if(loc==1)
	{
		struct node *k=root;
		root=k->right;
		root->left=NULL;
		free(k);
	}
	else if(loc==len)
	{
		struct node *k=root;
		k->left->right=NULL;
		free(k);
	}
	else
	{
		int i=1;
		struct node *k=root,*l;
		while(i<loc)
		{
			k=k->right;
		}
		l=k->left;
		l->right=k->right;
		k->left=l;
		free(k);
	}
}
void display()
{
	count++;
	struct node *k=root;
	while(k!=NULL)
	{
		printf("%d<=>",k->data);
		k=k->right;
	}
}
int search()
{
	count++;
	int a;
	printf("Enter element to search : ");
	scanf("%d",&a);
	struct node *k=root;
	while(k!=NULL)
	{
		if(k->data==a)
		return 1;
		k=k->right;
	}
	return 0;
}
void main()
{
	int choice,len;
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
					printf("Length of double linked list is %d\n",len);
						break;
			case 6 : display();
						break;
			case 7 : if(search())
					printf("Data found in double linked list\n");
					else
					printf("Data not found in double linked list\n");
					break;
			case 0 : printf("Total operations are %d",count);
					exit(1);
						break;
			default : printf("Invalid choice \n");
		}
	}
}
