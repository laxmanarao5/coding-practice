#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int year;
	cout<<"Enter the year : ";
	cin>>year;
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	cout<<year<<" is a leap year.";
	else
	cout<<year<<" is not a leap year.";
}
