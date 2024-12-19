#include<iostream>
using namespace std;
int interest(float p,float t,float r=18)
{
	int i=(p*t*r)/100;
	return i;
}
int main()
{
	float p=200000;
	float t=1;
	float r=8.5;
	float i=interest(p,t,r);
	cout<<"Interest is "<<i<<endl;
	cout<<"Total amount to be paid : "<<p+i<<endl;
	float k=interest(p,t);
	cout<<"Interest is "<<k<<endl;
	cout<<"Total amount to be paid : "<<p+k<<endl;
}
