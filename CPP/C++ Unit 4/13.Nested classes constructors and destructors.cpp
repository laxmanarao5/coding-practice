#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			cout<<"Enter a number : ";
			cin>>a;
		}
		~A()
		{
			cout<<"Number is "<<a<<endl;
		}
		class B
		{
			int b;
			public:
				B()
				{
					cout<<"Enter another number : ";
					cin>>b;
				}
				~B()
				{
					cout<<"Second Number is "<<b<<endl;
				}
		};
};
int main()
{
	A x;
	A::B y;
}
