#include<iostream>
using namespace std;
class item
{
	int a,b;
	public:
		item(int a, int b)
		{
			(*this).a=a;
			(*this).b=b;
		}
    item(item &old)
	{
		a=old.a;
		b=old.b;
	}		
	void show()
	{
		cout<<"values of a and b are: "<<a<<" "<<b<<endl;
	}
};
main()
{
	item t1(10,20);
	item t2(t1);
	t1.show();
	t2.show();
}
