#include<iostream>
using namespace std;
class age
{
	private:
		int byear;
		int pyear;
		int year;
	public:
		void input()
		{
			cout<<"Enter Birth and present year : ";
			cin>>byear>>pyear;
		}
		void time(age a);
};
void age::time(age a)
{
	year=a.pyear-a.byear;
	cout<<"Age is "<<year<<endl;
}
int main()
{
	age p1;
	p1.input();
	p1.time(p1);
}
