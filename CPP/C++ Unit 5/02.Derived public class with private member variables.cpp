#include<iostream>
using namespace std;
class a
{
	int x;
	public:
		a()
		{
			cout<<"Enter a number : ";
			cin>>x;
		}
		showx()
		{
			cout<<"x = "<<x<<endl;
		}
};
class b : public a
{
	int y;
	public:
		b()
		{
			cout<<"Enter another number : ";
			cin>>y;
		}
		void show()
		{
			showx();
			cout<<"y = "<<y<<endl;
		}
};
int main()
{
	b x;
	x.show();
}
