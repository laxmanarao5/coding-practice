#include<iostream>
using namespace std;
class count
{
	private:
		static int arr[10];
	public:
		void show();
		void input();
		void digit(int a);
};
int count::arr[]={0,0,0,0,0,0,0,0,0,0};
void count::input()
{
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	digit(a);
}
void count::digit(int x)
{
	int rem;
	while(x!=0)
	{
		rem=x%10;
		arr[rem]++;
		x=x/10;
	}
}
void count::show()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(arr[i]==0)
		continue;
		cout<<i<<" repeated "<<arr[i]<<" times"<<endl;
	}	
}
int main()
{
	count a;
	a.input();
	a.show();
}
