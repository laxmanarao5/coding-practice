#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	float p,t,r,i;
	cout<<"Enter principle amount : ";
	cin>>p;
	cout<<"Enter time period : ";
	cin>>t;
	cout<<"Enter rate of interest : ";
	cin>>r;
	i=(p*t*r)/100;
	cout<<"Interest is "<<i;
	cout<<"\n";
	cout<<"Total payable amount is "<<p+i;
}
