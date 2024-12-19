#include<iostream>
using namespace std;
class sample
{
	static int c;
	int k;
	public:
		void count()
		{
			c++;
			k++;
			cout<<c<<" and Address is "<<&c<<endl;
			cout<<k<<" and Address is "<<&k<<endl;
		}
};
int sample::c=0;
int main()
{
	sample a,b,c,d;
	a.count();
	b.count();
	c.count();
	d.count();
}
