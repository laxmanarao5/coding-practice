#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int n,rem,rev=0;
	cout<<"Enter a number : ";
	cin>>n;
	int p=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==p)
	cout<<"Given number is a palindrome";
	else
	cout<<"Given number is not a palindrome";
}
