#include<iostream>
using namespace std;
class item
{
	int i;
	float f;
	char c;
};
int main()
{
	item a,b;
	cout<<"Size of object-1 is "<<sizeof(a)<<endl;
	cout<<"Size of object-2 is "<<sizeof(b)<<endl;
	cout<<"Size of class item is "<<sizeof(item);
}
