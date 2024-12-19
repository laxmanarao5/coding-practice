#include<stdio.h>
int main()
{
	FILE *laxman;
	char path[20];
	char data[50];
	printf("Enter the filename : ");
	scanf("%s",path);
	laxman=fopen(path,"r");
	if(laxman==NULL)
	{
		printf("file not found ");
	}
	else
	{
		printf("File is opened sucessfully\n");
		while(fgets(data,50,laxman)!=NULL)
		{
			printf("%s",data);
		}
	printf("\nData sucessfully read from %s\n",path);
	fclose(laxman);
	printf("File is now closed.");
	}
	return 0;
}
