#include<iostream>
using namespace std;
class dist
{
	private:
		int feet;
		int inch;
	public:
		void input()
		{
			cout<<"Enter distance in feets and inches : ";
			cin>>feet>>inch;
		}
		void output()
		{
			cout<<"feet="<<feet<<" "<<"inche="<<inch;
		}
	void add(dist &x,dist &y);
};
void dist::add(dist &x,dist &y)
{
	feet=x.feet+y.feet;
	inch=x.inch+y.inch;
	if(inch>=12)
	{
		feet=feet+inch/12;
		inch=inch%12;
	}
	cout<<feet<<" Feets and "<<inch<<" Inches"<<endl;		
}
int main()
{
	dist d1,d2,d3;
	d1.input();
	d2.input();
	d3.add(d1,d2);
}
