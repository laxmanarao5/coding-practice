#include<iostream>
using namespace std;
int x;// Extern variable an be modified anywhere
void autovariable()
{
	auto int a =10; //auot variable i.e, Local variables
	auto float b =1.5;
	cout<<"a is "<<a<<" and b is "<<b<<endl<<endl;
}
void externvariable()
{
	x=10;
	cout<<"x = "<<x<<endl;
}
void staticvariable()
{
	static int a=0;
	a++;
	cout<<"    Static variable a = "<<a<<" and adress : "<<&a<<endl;
	int b=0;
	b++;
	cout<<"Non static variable b = "<<b<<" and adress : "<<&b<<endl;
	static int c; //Initialises to zero
	cout<<"    Static variable a = "<<c<<" and adress : "<<&c<<endl;
}
void registervariable()
{
	register int a =10;
	cout<<"a = "<<a<<endl;
	a++;
	register int b;
	cout<<"b = "<<b<<endl;
}
int main()
{
	cout<<"Auto Storage class\n";
	autovariable();
	cout<<"Extern variable "<<endl;
	externvariable();
	cout<<"x = "<<x<<endl;
	x=20;
	cout<<"x = "<<x<<endl<<endl;
	cout<<"Static variable "<<endl;
	staticvariable();
	staticvariable();
	staticvariable();
	cout<<"\nRegister variable \n";
	registervariable();
	registervariable();//Executes faster than normal variable
	registervariable(); //if registers are free in microprocessors
	
}
