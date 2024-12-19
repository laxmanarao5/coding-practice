#include<iostream>
using namespace std;
int a=10;
namespace laxman
{
	int a=100;
}
int main()
{
	int a=1000;
	cout<<"Global value of a is "<<::a<<"\n";
	cout<<"Namespace value of a is "<<laxman::a<<"\n";
	cout<<"Local value of a is "<<a<<endl;
	int *p=new int;
	*p=10;
	cout<<"P value is "<<*p<<endl;
	delete p;
	cout<<"P value is "<<*p;
}
