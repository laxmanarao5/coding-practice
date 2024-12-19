#include<iostream>
using namespace std;
int main()
{
	char string[20];
	cout<<"Enter string : ";
	cin>>string;
	int i=0;
	while(string[i]!='\0')
	{
		if((string[i]>='a')&&(string[i]<='z'))
		string[i]=(string[i]-32);
		i++;
	}
	cout<<"string is "<<string;
}
