#include<iostream>
using namespace std;
class item
{
	private:
		int k;
		void in(void);
	protected:
		int l;
		void input(void);
	public:
		int t;
		void showp1();
		void showp2();
};
inline void item::in()
{
	cout<<"Enter k value : ";
	cin>>k;
}
inline void item:: input()
{
	cout<<"Enter L value : ";
	cin>>l;
}
inline void item::showp1()
{
	cout<<"K value is "<<k<<endl;
}
inline void item::showp2()
{
	cout<<"L value is "<<l<<endl;
}
int main()
{
	item a;
	a.in();
	a.input();
	cout<<"Enter T value : ";
	cin<<a.t;
	cout<<"***Private Data***"<<endl;
	a.showp1();
	cout<<"***Protected Data***"<<endl;
	a.showp2();
	cout<<"**Public Data***"<<endl;
	cout<<"T value is "<<a.t<<endl;
}
