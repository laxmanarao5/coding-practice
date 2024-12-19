#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;
int len;
int count=0;
void append()
{
	count++;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
void addatbegining()
{
	count++;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		temp->link=root;
		root=temp;
	}
}
int length()
{
	count++;
	int l=0;
	struct node *temp;
	temp=root;
	while(temp!=NULL)
	{
		temp=temp->link;
		l++;
	}
	return l;
}
void addafter()
{
	count++;
	int loc;
	printf("Enter location :");
	scanf("%d",&loc);
	len=length();
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",&temp->data);
	temp->link=NULL;
	struct node *p;
	p=root;
	if(root==NULL)
	{
		root=temp;
	}
else	if(loc>len)
	{
		printf("Invalid location\n");
	}
	else
	{
		int i=1;
		while(i<loc)
		{
			p=p->link;
			i++;
		}
		temp->link=p->link;
		p->link=temp;
	}
}
void delete()
{
	count++;
	int loc;
	printf("Enter the location :");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("Invalid location \n");
	}
	else if(loc==1)
	{
		struct node *p;
		p=root;
		root=p->link;
		p->link=NULL;
		free(p);
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
			i++;
		}
		k=l->link;
		l->link=k->link;
		k->link=NULL;
		free(k);
	}
}
void display()
{
	count++;
	struct node *temp;
	temp=root;
	while(temp!=NULL)
	{
		printf("%d--->",temp->data);
		temp=temp->link;
	}
}
void reverse()
{
	count++;
	len=length();
	struct node *l,*k;
	l=root;
	k=root;
	int i=1;
	int j=len;
	while(i<j)
	{
		int p=1;
		while(p<j)
		{
			k=k->link;
			p++;
		}
		struct node *r;
		r=l->data;
		l->data=k->data;
		k->data=r;
		i++;
		j--;
		l=l->link;
		k=root;
	}
}
void swap()
{
	count++;
	int loc1,loc2;
	printf("Enter locations :");
	scanf("%d%d",&loc1,&loc2);
	struct node *l,*k;
	l=root;
	k=root;
	int i=1;
	while(i<loc1)
	{
		l=l->link;
		i++;
	}
	int j=1;
	while(j<loc2)
	{
		k=k->link;
		j++;
	}
	struct node *b;
	b=l->data;
	l->data=k->data;
	k->data=b;
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
		k=k->link;
	}
	return 0;
}
void deleteafterdata()
{
	int a;
	int count=0;
	printf("Ener data: ");
	scanf("%d",&a);
	struct node *k=root;
	while(k->data!=a)
	{
		count++;
		k=k->link;
	}
	struct node *b=root;
	int i=1;
	while(i<count-1)
	{
		b=b->link;
	}
	b->link->link=NULL;
	struct node *l=k->link,*p;
	while(l->link!=NULL)
	{
		p=l;
		l=l->link;
		free(p);
	}
}
void main()
{
	int choice;
	while(1)
	{
		printf("\nOperations in single linked list \n");
		printf("1.Append \n");
		printf("2.Add at begining \n");
		printf("3.Add after \n");
		printf("4.Delete \n");
		printf("5.Length \n");
		printf("6.Display \n");
		printf("7.Reverse \n");
		printf("8.Swap \n");
		printf("9.Search\n");
		printf("10.Delete all data after given data \n");
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
			case 7 : reverse();
						break;
			case 8 : swap();
						break;
			case 9 : if(search())
					printf("Data found in linked list\n");
					else
					printf("Data not found in linked list\n");
					break;
			case 10 :deleteafterdata();
					break;
			case 0 : printf("Total operations are %d",count);
						exit(1);
						break;
			default : printf("Invalid choice \n");
		}
	}
}
