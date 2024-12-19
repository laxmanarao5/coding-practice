#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	int n,choice,i,sum=0;
	cout<<"Enter n value : ";
	cin>>n;
	while(1){
	cout<<"\n1.sum of natural numbers\n";
	cout<<"2.sum of squares of natural numbers\n";
	cout<<"3.sum of cubes of natural numbers\n";
	cout<<"4.Exit\n";
	cout<<"Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1 :for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
		cout<<"Sum of "<<n<<" Natural numbers is "<<sum;
		break;
		case 2 :for(i=1;i<=n;i++)
		{
			sum=sum+(i*i);
		}
		cout<<"Sum of squares of"<<n<<" Natural numbers is "<<sum;
		break;
		case 3 :for(i=1;i<=n;i++)
		{
			sum=sum+(i*i*i);
		}
		cout<<"Sum of cubes of "<<n<<" Natural numbers is "<<sum;
		break;
		case 4 :exit(1);
				break;
		default : cout<<"Inavalid option";
	}
}
}
