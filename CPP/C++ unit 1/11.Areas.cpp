#include<iostream>
using namespace std;
#define pie 3.14
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int choice,area,s1,s2;
	while(1){
	cout<<"\nSelect below to find area\n";
	cout<<"1.Square\n";
	cout<<"2.Triangle\n";
	cout<<"3.Circle\n";
	cout<<"4.Rectangle\n";
	cout<<"5.Exit\n";
	cout<<"Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<"Enter length of side : ";
				cin>>s1;
				area=s1*s1;
				cout<<"Area of square is "<<area;
				break;
		case 2 : cout<<"Enter base length and height : ";
				cin>>s1>>s2;
				area=(s1*s2)/2;
				cout<<"Area of triangle is "<<area;
				break;
		case 3 : cout<<"Enter radious of circle : ";
				cin>>s1;
				area=pie*s1*s1;
				cout<<"Area of circle is "<<area;
				break;
		case 4 : cout<<"Enter length and width : ";
				cin>>s1>>s2;
				area=s1*s2;
				cout<<"Area of Rectangle is "<<area;
				break;
		case 5 : exit(1);
		       break;
		default : cout<<"Invalid choice \n";
	}
}
}
