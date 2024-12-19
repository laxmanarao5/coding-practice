#include<iostream>
using namespace std;
class sample
{
	static int c;
	public:
		void count()
		{
			c++;
			cout<<c<<endl;
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
