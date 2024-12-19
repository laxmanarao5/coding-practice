#include<iostream>
using namespace std;
int power(int x,int n)
{
	int i,r=1;
	
	for(i=1;i<=n;i++)
	{
		r=r*x;
	}
	return r;
}
int main()
{
	int n,p;
	cout<<"Enter a number and power : ";
	cin>>n>>p;
	cout<<power(n,p);
}
