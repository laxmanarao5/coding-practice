#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int n,t1=0,t2=1,next;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Fobonacci series "<<endl<<t1<<"\t"<<t2<<"\t";
	next=t1+t2;
	while(next<=n)
	{
		cout<<next<<"\t";
		t1=t2;
		t2=next;
		next=t1+t2;
	}
}
