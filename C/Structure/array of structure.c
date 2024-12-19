#include<stdio.h>
struct student
{
	char name[30];
	int id;
	int age;
};
struct student s;
main()
{
struct student s[50]={{"laxman",170116,18},{"dileep",170326,18}};
int i;
for(i=0;i<2;i++)
{
printf("\n***** student %d details *****",i+1);
printf("\n student name : %s",s[i].name);
printf("\n student ID   : %d",s[i].id);
printf("\n student age  : %d",s[i].age);
}
return 0;
}
