#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[12];
	printf("Opening the file filename.c in writen mode\n");
	fp=fopen("filename.txt","w");
	if(fp==NULL)
	{
		printf("Could not open file\n");
		return 1;
	}
	printf("\nEnter some text fro keyboard : ");
	while(strlen(gets(data))>0)
	{
		fputs(data,fp);
		fputs("\n",fp);
	}
	printf("\nClosing the file");
	fclose(fp);
	return 0;		
}
