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
			cout<<"Constructor called\n";
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
	item x,y,z;
	x.show(); 
}
