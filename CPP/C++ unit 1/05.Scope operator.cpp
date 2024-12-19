#include<iostream>
using namespace std;
int a=10;
namespace laxman
{
	int a=100;
}
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int a=1000;
	cout<<"Global value of a is "<<::a<<"\n";
	cout<<"Namespace value of a is "<<laxman::a<<"\n";
	cout<<"Local value of a is "<<a;
}
