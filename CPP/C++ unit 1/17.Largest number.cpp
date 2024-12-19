#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int a,b,c,choice;
	while(1){
	cout<<"\nTo find largest of \n";
	cout<<"1.Two numbers\n";
	cout<<"2.Three numbers\n";
	cout<<"3.exit\n";
	cout<<"Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"Enter two numbers : ";
		cin>>a>>b;
		if(a>b)
		cout<<a<<" is largest number \n";
		else
		cout<<b<<" is largest number \n";
		break;
		case 2 :
		cout<<"Enter three numbers : ";
		cin>>a>>b>>c;
		if(a>b &&a>c)
		cout<<a<<" is largest number \n";
		else if(b>a && b>c)
		cout<<b<<" is largest number \n";
		else
		cout<<c<<" is largest number \n";
		break;
		case 3:exit(1);
			break;
		default:cout<<"Invalid choice ";
	}
}
}
