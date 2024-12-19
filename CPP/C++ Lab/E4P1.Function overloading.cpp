#include<iostream>
using namespace std;
void display(int i)
{
	cout<<"Integer value is "<<i<<endl;
}
void display(float a)
{
	cout<<"Float value is "<<a<<endl;
}
void display(char b)
{
	cout<<"Character is "<<b<<endl;
}
void display(int a,int b)
{
	cout<<"Entered numbers are "<<a<<" and "<<b<<endl;
}
int main()
{
	int a=10,b=20;
	float c=93.5;
	char d='L';
	display(a);
	display(c);
	display(d);
	display(a,b);
}
