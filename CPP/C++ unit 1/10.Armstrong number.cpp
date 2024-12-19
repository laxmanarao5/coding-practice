#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int n,rev,p,sum=0;
	cout<<"Enter a number : ";
	cin>>n;
	p=n;
	while(p!=0)
	{
		rev=p%10;
		sum=sum+(rev*rev*rev);
		p=p/10;
	}
	if(sum==n)
	cout<<n<<" is a Armstrong number";
	else
	cout<<n<<" is not Armstrong number";
}
