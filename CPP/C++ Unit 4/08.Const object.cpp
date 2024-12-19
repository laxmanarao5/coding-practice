#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A(int a)
		{
			this->a=a;
		}
		void show() const
		{
		cout<<"a = "<<a;
		}
};
int main()
{
	const A x(6);
	x.show();
}
