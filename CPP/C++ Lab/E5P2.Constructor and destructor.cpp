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
		~Distance()
		{
			cout<<"In distructure\n";
		}
	void add(Distance &x);
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
int main()
{
	Distance d1,d2;
	d1.add(d2);
}
