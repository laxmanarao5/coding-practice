#include<iostream>
using namespace std;
class item
{
	int a,b,c;
	public:
		item(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		item(int x,int y)
		{
			a=x;
			b=y;
			c=0;
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
	item x(10,20,30);
	item y(10,20);
	x.show(); 
	y.show();
}
