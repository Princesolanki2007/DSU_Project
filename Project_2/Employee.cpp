#include<iostream>
using namespace std;

class employee
{
	private:
		int emp_no;
		char emp_name[20];
		float emp_basic;
		float emp_it;
		float emp_da;
		float emp_salary;
	public:
		void getdata();
		void putdata();
		float find_salary(float basic,float da,float it);
};
		
		void employee::getdata()
		{
			cout<<"Enter the Employee id_number  : ";
			cin>>emp_no;
			cout<<"Enter the Employee name : ";
			cin>>emp_name;
			cout<<"Enter the Employee basic : ";
			cin>>emp_basic;
			cout<<"Enter the Employee DA : ";
			cin>>emp_da;
			cout<<"Enter the Employee IT : ";
			cin>>emp_it;	
		}
		float employee ::find_salary(float basic,float da, float it)
		{
			return (basic+da)-it;
		}
		void employee::putdata()
		{
			cout<<endl;
			
			cout<<"Employee id_number is : "<<emp_no<<endl;
			cout<<"Employee name      is : "<<emp_name<<endl;
			cout<<"Employee basic        : "<<emp_basic<<endl;
			cout<<"Employee DA           : "<<emp_da<<endl;
			cout<<"Employee IT           : "<<emp_it<<endl;
			cout<<"Employee net salary   : "<<find_salary(emp_basic,emp_da,emp_it)<<endl;	
		}
int main()
{
	employee e;
	
	e.getdata();
	e.putdata();
	
	return 0;
}
