#include<stdio.h>
int main()
{
	FILE *laxman;
	char path[20];
	printf("Enter path : ");
	scanf("%s",path);
	laxman=fopen(path,"w");
	//fputs("laxmanarao",laxman);
	fputs("\nkavya\n",laxman);
	printf("Data sucessfully entered in %s\n",path);
	fclose(laxman);
	printf("File is closed.");
}
