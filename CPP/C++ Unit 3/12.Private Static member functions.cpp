#include<iostream>
using namespace std;
class item
{
	private:
		static int a;
		static void inc()
		{
			a++;
		}
	public:
		static void show();
};
int item::a=0;
void item::show()
{
	inc();
	cout<<a<<endl;
}
int main()
{
	item a;
	a.show();
	a.show();
	a.show();
	a.show();
}
