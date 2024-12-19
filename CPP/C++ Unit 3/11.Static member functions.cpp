#include<iostream>
using namespace std;
class item
{
	private:
		static int a;
	public:
		static void show();
		static void inc();
};
int item::a=0;
void item::show()
{
	cout<<a<<endl;
}
void item::inc()
{
	a++;
}
int main()
{
	item a;
	a.show();
	a.inc();
	a.show();
	a.inc();
	a.show();
	a.inc();
	a.show();
}
