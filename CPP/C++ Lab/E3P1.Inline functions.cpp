#include<iostream>
using namespace std;
inline void sum(int a,int b)
{
	cout<<"Sum is "<<a+b<<endl;
}
inline void multiply(int a,int b)
{
	cout<<"Product is "<<a*b<<endl;
}
int main()
{
	int x,y;
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	sum(x,y);
	multiply(x,y);
}
