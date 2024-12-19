#include<stdio.h>
int main()
{
	FILE *file1,*file2,*file3;
	char path1[20],path2[20],path3[20];
	char ch1[50],ch2[50];
	printf("Enter the first filename : ");
	gets(path1);
	printf("Enter the second filename : ");
	gets(path2);
	printf("Enter the third filename : ");
	gets(path3);
	file1=fopen(path1,"r");
	file2=fopen(path2,"r");
	file3=fopen(path3,"w");
	if(file1==NULL || file2==NULL){
		printf("Error occured");
	}
	else
	{
	while(fgets(ch1,50,file1)!=NULL)
	{
	fputs(ch1,file3);	
	}
	while(fgets(ch2,50,file2)!=NULL)
	{
	fputs(ch2,file3);	
	}
	printf("%s and %s merged as %s",path1,path2,path3);	
	}
	
}
