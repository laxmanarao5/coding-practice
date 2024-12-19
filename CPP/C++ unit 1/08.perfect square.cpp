#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int n,l;
	float k;
	cout<<"Enter a number : ";
	cin>>n;
	k=sqrt(n);
	l=k;
	if(l==k)
	{
	cout<<"The number is perfect square";
	}
	else
	{
		cout<<"The number is not perfect square";
	}
	return 0;
}
