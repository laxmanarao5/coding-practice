print("Enter '0' for exit.");
ch = input("Enter any character: ");
if ch == '5':
    exit();
else:
    if(ch=='a' or ch=='A' or ch=='e' or ch=='E' or ch=='i' or ch=='I'
       or ch=='o' or ch=='O' or ch=='u' or ch=='U'):
    	    print(ch, "is a vowel.");
    else:
    	print(ch, "is not a vowel.");




#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int main() {

	int a,b;
    scanf("%d %d",&a,&b);
    int n=1000000;
    int result=0;
    int i=1;
    while(1)
    {
        if(a<=0)
        {
        result=1;
        break;
        }
        if(b<=0)
        {
            result=2;
            break;
        }
        if(i%2==0)
        {
            a-i;
            b+i;
        }
        else
        {
            b-i;
            a+i;
        }
    }
    if(result==1)
    printf("Joey");
    if(result==2)
    printf("Chandler");
	return 0;
}