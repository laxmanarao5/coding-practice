#include<iostream>
using namespace std;
class item
{
	public:
		static int c;
};
int c=20;
int item::c=30;
int main()
{
	item a;
	item::c=50;
	cout<<c<<endl;
	cout<<item::c;
}
