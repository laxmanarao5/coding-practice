#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int i;
	float pi=(float)22/7;
	for(i=1;i<15;i++)
	{
		cout.precision(i);
		cout<<pi<<endl;
	}
}
