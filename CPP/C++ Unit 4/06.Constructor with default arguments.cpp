#include<iostream>
using namespace std;
class power
{
	public:
		power(int x,int n=2)
		{
			int r=1,i;
			for(i=1;i<=n;i++)
			{
				r=r*x;
			}
			cout<<"Power is "<<r<<endl;
		}
		
};
int main()
{
	power x(10,3),y(5);
}
