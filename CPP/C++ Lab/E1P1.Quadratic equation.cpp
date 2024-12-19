#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a,b,c,x1,x2,temp;
	float dis;
	int ch;
	cout<<"Enter coefficients of quadratic equation : ";
	cin>>a>>b>>c;
	dis=b*b-4*a*c;
	if(dis>0)
	ch=1;
	else if(dis==0)
	ch=2;
	else
	ch=3;
	switch(ch)
	{
		case 1 :temp=-b+sqrt(dis);
		x1=temp/(2*a);
		temp=-b-sqrt(dis);
		x2=temp/(2*a);
		cout<<"Roots are "<<x1<<" and "<<x2;
		break;
		case 2 :x1=-b/(2*a);
		cout<<"root are "<<x1<<" and "<<x1;
		break;
		case 3 : x1=-b/(2*a);
		x2=(sqrt(-dis)/(2*a));
		cout<<"Roots are "<<setprecision(2)<<x1<<"+"<<setprecision(2)<<x2<<"i";
		cout<<" and ";
		cout<<setprecision(2)<<x1<<"-"<<setprecision(2)<<x2<<"i";
		break;
	}
}
