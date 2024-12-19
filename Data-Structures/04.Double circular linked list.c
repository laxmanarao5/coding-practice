#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
int count=0;
struct node *root=NULL;
void append()
{
	count++;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&temp->data);
	temp->right=NULL;
	temp->left=NULL;
	if(root==NULL)
	{
		root=temp;
		temp->right=root;
		temp->left=root;
	}
	else
	{
		struct node *k=root;
		while(k->right!=root)
		{
			k=k->right;
		}
		temp->right=root;
		temp->left=k;
		k->right=temp;
		root->left=temp;
	}
}
void addatbegining()
{
	count++;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&temp->data);
	temp->right=NULL;
	temp->left=NULL;
	if(root==NULL)
	{
		root=temp;
		temp->right=root;
		temp->left=root;
	}
	else
	{
		struct node *k=root;
		while(k->right!=root)
		{
			k=k->right;
		}
		temp->right=root;
		root->left=temp;
		temp->left=k;
		root=temp;
		k->right=root;
	}
}
int length()
{
	count++;
	int l=0;
	struct node *k=root;
	while(k->right!=root)
	{
		k=k->right;
		l++;
	}
	l++;
	return l;
}
void display()
{
	count++;
	struct node *k=root;
	while(k->right!=root)
	{
		printf("%d<=>",k->data);
		k=k->right;
	}
	printf("%d",k->data);
}
void addafter()
{
	count++;
	int loc,len;
	printf("Enter location : ");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("Invalid location \n");
	}
	else
	{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&temp->data);
	temp->right=NULL;
	temp->left=NULL;
	int i=1;
	struct node *k=root;
	while(i<loc)
	{
		k=k->right;
		i++;
	}
	temp->right=k->right;
	temp->left=k;
	k->right->left=temp;
	k->right=temp;
	}
}
void delete()
{
	count++;
	int loc,len;
	printf("Enter location : ");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("Invalid location \n");
	}
	else if(loc==1)
	{
		struct node *k=root,*l=root;
		while(k->right!=root)
		{
			k=k->right;
		}
		root=l->right;
		root->left=k;
		k->right=root;
		l->left=NULL;
		l->right=NULL;
		free(l);
	}
	else if(loc==len)
	{
		int i=1;
		struct node *k=root,*l;
		while(i<loc)
		{
			k=k->right;
			i++;
		}
		l=k->left;
		l->right=root;
		root->left=l;
		k->left=NULL;
		k->right=NULL;
		free(k);		
	}
	else
	{
		int i=1;
		struct node *k=root,*l;
		while(i<loc)
		{
			k=k->right;
			i++;
		}
		l=k->left;
		l->right=k->right;
		k->right->left=l;
		k->right=NULL;
		k->left=NULL;
		free(k);
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\nOperatins in double circular linked list \n");
		printf("1.Append\n");
		printf("2.Add at begiming\n");
		printf("3.Add after\n");
		printf("4.Delete\n");
		printf("5.Length\n");
		printf("6.Display\n");
		printf("7.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :append();
			break;
			case 2 : addatbegining();
			break;
			case 3 : addafter();
			break;
			case 4 :delete();
			break;
			case 5 :printf("Length of linked list is %d\n",length());
			break;
			case 6 :display();
			break;
			case 7 :printf("Total operation are %d",count);
					exit(1);
			break;
			default :printf("Inavalid choice\n");
		}
	}
}
