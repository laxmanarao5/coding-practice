#include<iostream>
using namespace std;
int prime(int a)
{
	int i,count=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count==2)
	return 1;
	else
	return 0;
}
void prime(int a,int b)
{
	int i;
	cout<<"Prime numbers between "<<a<<" and "<<b<<endl;
	if(a<2)
	a=2;
	for(i=a;i<=b;i++)
	{
		if(prime(i))
		cout<<i<<"\t";
	}
}
int main()
{
	int a=prime(2);
	if(a==1)
	cout<<"prime"<<endl;
	else
	cout<<"Not prime"<<endl;
	prime(1,20);
}
