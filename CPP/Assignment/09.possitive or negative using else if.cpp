#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a integer : ";
	cin>>a;
	if(a>0)
	{
		cout<<a<<" is a possitive number";
	}
	else if(a==0)
	{
		cout<<a<<" is zero";
	}
	else
	{
		cout<<a<<" is a negativenumber";
	}
	return 0;
}
