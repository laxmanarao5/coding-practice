#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	cout<<"Before swapping \n";
	cout<<"a = "<<x<<"\nb = "<<y<<endl;
	swap(x,y);
	cout<<"After swapping \n";
	cout<<"a = "<<x<<"\nb = "<<y<<endl;
}
