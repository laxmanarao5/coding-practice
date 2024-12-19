#include<iostream>
using namespace std;
inline float pow(float x,float n)
{
	float p=x;
	while(n>1)
	{
		p=p*x;
		n--;
	}
	return p;
}
int main()
{
	float p,t,r,total;
	cout<<"Enter principle amount : ";
	cin>>p;
	cout<<"Enter rate of interest : ";
	cin>>r;
	cout<<"Enter time period : ";
	cin>>t;
	float x=(1+(r/100));
	total=p*pow(x,t);
	cout<<"Interest is "<<total-p<<"\n";
	cout<<"Total payable amount is "<<total;
	
}
