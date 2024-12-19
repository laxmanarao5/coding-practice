#include<iostream>
using namespace std;
class a
{
	public:
		int x;
};
class b :public a
{
	public:
	int k;
		void show()
		{
			cout<<"x= "<<x<<" k= "<<k<<endl;
		}
};
int main()
{
	b x;
	x.x=10;
	x.k=20;
	x.show();
}
