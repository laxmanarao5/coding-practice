#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a integer : ";
	cin>>a;
	if(a>=0)
	{
		if(a>0)
		cout<<a<<" is a possitive number";
		else
		cout<<a<<" is zero";
	}
	else
	{
		cout<<a<<" is a negativenumber";
	}
	return 0;
}
