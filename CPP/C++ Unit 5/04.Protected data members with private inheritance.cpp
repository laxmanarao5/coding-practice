#include<iostream>
using namespace std;
class a
{
	protected:
		int x;
};
class b:private a
{
	protected:
		int y;
	public:
		b()
		{
			cout<<"Enter two numbers : ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"x = "<<x<<" y = "<<y<<endl;
		}
};
int main()
{
	b x;
	x.show();
}
