#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping \n";
	cout<<"Value of a is "<<a<<"\n";
	cout<<"Value of b is "<<b;
}
