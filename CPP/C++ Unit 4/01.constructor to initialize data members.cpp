#include<iostream>
using namespace std;
class item
{
	int a,b,c;
	public:
		item()
		{
			a=1;
			b=2;
			c=3;
		}
		void show()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
		}
};
int main()
{
	item x;
	x.show(); 
}
