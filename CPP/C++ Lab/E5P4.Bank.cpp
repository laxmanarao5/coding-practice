#include<iostream>
using namespace std;
int bankac=10000;
int noac=0;
class bank
{
	char name[20];
	int age;
	float bal;
	int passcode;
	public:
		bank()
		{
		bal=0;
		}
		int acno;
		void create();
		void acbal();
		void deposit();
		void withdraw();
		void show();
};
void bank::show()
{
	cout<<"A/c no : "<<bankac-1<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
}
void bank::create()
{
	int temp,temp1;
	acno=bankac;
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter age : ";
	cin>>age;
	do{
	cout<<"Set your passcode : ";
	cin>>temp;
	cout<<"Confirm your paascode : ";
	cin>>temp1;
	passcode=temp;
	}
	while(temp!=temp1);
	bankac++;
	noac++;
	cout<<"Account created sucessfully\n";
	int m;
	cout<<"Deposit money to activate your account\n";
	cout<<"Enter amount : ";
	cin>>m;
	bal=bal+m;
}
void bank::acbal()
{
	cout<<"Your account balance is "<<bal<<endl;
}
void bank::deposit()
{
	float m;
	cout<<"Enter amount : ";
	cin>>m;
	bal=bal+m;
	cout<<"Amount deposited sucessfully"<<endl;
}
void bank::withdraw()
{
	float m,p;
	cout<<"Enter amount : ";
	cin>>m;
	cout<<"Enter passcode : ";
	cin>>p;
	if(p==passcode)
	{
		if(bal>500 && bal>=m)
		{
			bal=bal-m;
			cout<<"Withdrawal Sucessful"<<endl;
		}
		else
		{
			cout<<"Unable to withdraw due to Insufficient funds\nAvailable balnce is "<<bal<<endl;
		}	
	}
	else
	{
		cout<<"Incorrect Passcode\n";
	}
}
int check(bank c[],int a)
{
	int i;
	for(i=0;i<=noac;i++)
		{
			if(a==c[i].acno)
			{
				return i;
			}
		}
			return -1;
}
int main()
{
	bank c[100];
	int ac,i,ch;
	while(1)
	{
		int count=0;
		cout<<"Welcome to Money++ bank\n";
		cout<<"1.Create\n2.Balance\n3.Deposit\n4.Withdraw\n5.Exit\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		int index;
		switch(ch)
		{
			case 1: c[noac].create();
			c[noac-1].show();
			c[noac-1].acbal();
			break;
			case 2: cout<<"Enter account number : ";
					cin>>ac;
					index=check(c,ac);
					if(index==-1)
						cout<<"No account found\n";
					else
						c[index].acbal();
					break;
			case 3 :
					cout<<"Enter account number : ";
					cin>>ac;
					if(index==-1)
						cout<<"No account found\n";
					else
						c[index].deposit();
					break;
			case 4 :  cout<<"Enter account number : ";
					cin>>ac;
					if(index==-1)
						cout<<"No account found\n";
					else
						c[index].withdraw();
					break;
			case 5 : cout<<"Thanks you for Banking with us\nVisit again\n";
					exit(1);
					break;
			default : cout<<"Invalid input"<<endl;
		}
	}
}
