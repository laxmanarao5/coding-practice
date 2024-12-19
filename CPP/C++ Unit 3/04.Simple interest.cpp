#include<iostream>
using namespace std;
class loan
{
	private:
	int p;
	float r;
	float t;
	void in();
	public:
		void show();
};
inline void loan::in()
{
	cout<<"Enter principle amount : ";
	cin>>p;
	cout<<"Enter rate of interest : ";
	cin>>r;
	cout<<"Enter time period      : ";
	cin>>t;
}
inline void loan::show()
{
	in();
	cout<<"Principle amount : "<<p<<endl;
	cout<<"Rate of interest : "<<r<<endl;
	cout<<"Time period      : "<<t<<endl;
	float i=((p*t*r)/100);
	cout<<"Interest is "<<i<<endl;
	cout<<"Total amount is "<<p+i;
}
int main()
{
	loan a;
	a.show();
}
