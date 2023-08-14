#include<iostream>
using namespace std;

class student 
{
	public:
		char name[20];
		int rollno;
		int age;
		char department[30];
		
		void getdata()
		{
			cout<<"Enter the stduent Information "<<endl;
			cout<<"Enter the name            : ";
			cin>>name;
			cout<<"Enter the roll_number     : ";
			cin>>rollno;
			cout<<"Enter the age of student  : ";
			cin>>age;
			cout<<"Enter the Department      : ";
			cin>>department;
		}
		void putdata()
		{
			cout<<"Name is        :  "<<name<<endl;
			cout<<"Roll number is :  "<<rollno<<endl;
			cout<<"Age is         :  "<<age<<endl;
			cout<<"Department  is :  "<<department<<endl;
		}
};
int main()
{
	student s1;
	s1.getdata();
	s1.putdata();
	return 0;
}
