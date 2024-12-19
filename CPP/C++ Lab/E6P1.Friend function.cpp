#include<iostream>
using namespace std;
class y;
class x
{
	private:
		int a1;
	public:
		int a2;
		x()
		{
			cout<<"enter three values :";
			cin>>a1>>a2>>a3;
		}
		friend void sum(x,y);
	protected:
		int a3;
};

class y
{
	private:
		int a1;
	public:
		int a2;
		y()
		{
			cout<<"enter three values :";
			cin>>a1>>a2>>a3;
		}
		friend void sum(x,y);
	protected:
		int a3;	
};
void sum(x t1,y t2)
{
	cout<<"sum of private data : "<<t1.a1+t2.a1;
	cout<<"\nSum of public data : "<<t1.a2+t2.a2;
	cout<<"\nSum of protected data : "<<t1.a3+t2.a3<<endl;	
}

main()
{
	x a;
	y b;
	sum(a,b);
}

