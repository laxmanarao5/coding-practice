#include<iostream>
using namespace std;
class student
{
	private:
		char name[20];
		int rollno;
		float gpa;
		void in();
	public:
		void show();	
};
inline void student::in()
{
cout<<"Enter Name  : ";cin>>name;
cout<<"Roll number : ";cin>>rollno;
cout<<"Enter CGPA  : ";cin>>gpa;
}
inline void student::show()
{
in();
cout<<"Name    : "<<name<<endl;
cout<<"Roll no : "<<rollno<<endl;
cout<<"CGPA    : "<<gpa;
}
int main()
{
	student s;
	s.show();
	return 0;
}
