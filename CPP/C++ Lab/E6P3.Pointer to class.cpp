#include<iostream>
using namespace std;
class sample
{
	int x;
	public:
		void input()
		{
			cout<<"enter the number: ";
			cin>>x;
		}
		void show()
		{
			cout<<"value of x: "<<x;
		}
};

int main()
{
	sample a;
	a.input();
	sample *p;
	p=&a;
	p->show();
}
