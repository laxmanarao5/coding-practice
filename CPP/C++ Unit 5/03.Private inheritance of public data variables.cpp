#include<iostream>
using namespace std;
class a
{
	public:
	int x;
};
class b : private a
{
	public:
		int y;
		void input()
		{
			cout<<"Enter two numbers : ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<"X = "<<x<<" Y = "<<y<<endl;
		}
};
int main()
{
	b x;
	//x.x=20 direct access through object is not allowed
	x.input();
	x.show();
}
