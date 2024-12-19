#include<stdio.h>
struct student
{
	int regid;
	char name[20];
	float cgpa;
	struct address
	{
		char village[30];
		char dist[20];
		long int phno;
	}add;
};
int main()
{
	int i,n;
	struct student s[100];
	printf("Enter no of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter REGID : ");
		scanf("%d",&s[i].regid);
		printf("Enter Name : ");
		scanf("%s",s[i].name);
		printf("Enter CGPA : ");
		scanf("%f",&s[i].cgpa);
		printf("Enter Address : ");
		scanf("%s%s%ld",s[i].add.village,s[i].add.dist,&s[i].add.phno);
	}
	struct student t;
	int j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i].regid<s[j+1].regid)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("\n\n****Student details****\n\n");
	printf("REGID\tName\tCGPA\t\tAddress\n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",s[i].regid);
	printf("%s\t",s[i].name);
	printf("%1f\t",s[i].cgpa);
	printf("%s,%s,%ld\n",s[i].add.village,s[i].add.dist,s[i].add.phno);
	}
}
	
