#include<iostream>
using namespace std;
class item
{
	int a;
	public:
		item()
		{
			cout<<"In constructor\nEnter a number : ";
			cin>>a;
		}
		~item()
		{
			cout<<"In destructor\n";
			cout<<"a = "<<a;
		}
};
int main()
{
	item x;
}
