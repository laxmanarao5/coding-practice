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
	x.show(); 
}
