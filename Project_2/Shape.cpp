#include<iostream>
using namespace std;

class shape
{
	private:
		float le,br;
	public:
		void getdata()
		{
			cout<<"Enter the Rectangle length : ";
			cin>>le;
			cout<<"Enter the Rectanglr breath : ";
			cin>>br;
		}
		void putdata()
		{
			int area;
			area = le*br;
			
			cout<<"This is rectangle area : "<<area<<endl;
		}
};
class circle
{
	private:
		float radius;
	public:
		void getdata()
		{
			cout<<"Enter the circle radius : ";
			cin>>radius;
		}
		void putdata()
		{
			float area;
			
			area = (22*(radius * radius))/7;
			cout<<"This is circle radius : "<<area;
		}
};
int main()
{
	shape s1;
	
	s1.getdata();
	s1.putdata();
	
	circle c1;
	c1.getdata();
	c1.putdata();
	return 0;
}
