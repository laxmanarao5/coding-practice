#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inch;
	public:
		Distance()
		{
			cout<<"Enter distance in feets and inches : ";
			cin>>feet>>inch;
		}
	void add(Distance &x);
	void add(Distance &x,Distance &y);
};
void Distance::add(Distance &x)
{
	int feets,inches;
	feets=x.feet+feet;
	inches=x.inch+inch;
	if(inches>=12)
	{
		feets=feets+inches/12;
		inches=inches%12;
	}
	cout<<feets<<" Feets and "<<inches<<" Inches"<<endl;		
}
void Distance::add(Distance &x,Distance &y)
{
	int feets,inches;
	feets=x.feet+feet+y.feet;
	inches=x.inch+inch+y.inch;
	if(inches>=12)
	{
		feets=feets+inches/12;
		inches=inches%12;
	}
	cout<<feets<<" Feets and "<<inches<<" Inches"<<endl;		
}
int main()
{
	Distance d1,d2;
	cout<<"Sum of two distances\n";
	d1.add(d2);
	Distance d3;
	cout<<"Sum of three distances\n";
	d1.add(d2,d3);
}
