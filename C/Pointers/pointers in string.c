#include<stdio.h>
int main()
{
int count=0;
char str[50];
char *ptr;
ptr=str;
printf("\n Enter the string :");
gets(str);
while (*ptr!='\0') 	//we can use 1.while(*ptr) and 2.while (*(str+i)!='\0') also
{
	count++;
	ptr++;			//when using 2 use i++
}
printf("Length of string is %d",count);
}
