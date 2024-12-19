#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,l;
	float k;
	cout<<"Enter a number : ";
	cin>>n;
	k=sqrt(n);
	l=k;
	if(l==k)
	{
	cout<<"The number is perfect square";
	}
	else
	{
		cout<<"The number is not perfect square";
	}
	return 0;
}
