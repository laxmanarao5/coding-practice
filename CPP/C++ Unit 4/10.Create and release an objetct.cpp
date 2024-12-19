#include<iostream>
using namespace std;
int c=0;
class item
{
	public:
		item()
		{
			c++;
			cout<<"Object ("<<c<<") created \n";
		}
		~item()
		{
			cout<<"Object ("<<c<<") Released \n";
			c--;
		}
};
int main()
{
	item x,y,z;
}
