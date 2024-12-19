#include<iostream>
using namespace std;
class item
{
	int a,b,c;
	public:
		item()
		{
			cout<<"Enter three numbers : ";
			cin>>a>>b>>c;
		}
		void show()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
		}
};
int main()
{
	item x;
	x.show(); 
}
