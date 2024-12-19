#include<iostream>
using namespace std;
void swapv(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
}
void swapr(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	swapv(a,b);
	cout<<"a = "<<a<<" and b = "<<b<<endl;
	swapr(a,b);
	cout<<"a = "<<a<<" and b = "<<b<<endl;
}
