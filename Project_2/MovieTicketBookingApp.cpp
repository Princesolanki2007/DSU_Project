#include<iostream>
#include<string>
using namespace std;
class movie
{
	private:
	  string movieName;
	  string showTime;
	  int numberOfTickets;
	  float ticketPrice=150.00;
	  int booked,totalseats=210;
	public:
		void getdata();
		void putdata();
		void bookingseats();
};

void movie::getdata()
{
	cout<<"Enter the movie name : ";
	cin>>movieName;
	cout<<"Enter the show time : ";
	cin>>showTime;
	cout<<"Enter the number of tickets : ";
	cin>>numberOfTickets;
	cout<<"Ticket price is : 150RS per person "<<endl;
}
void movie::bookingseats()
{
	if(booked<=totalseats-numberOfTickets){
	numberOfTickets+=booked;
	cout<<"Seats avialable "<<endl;
	}
	else
	{
		cout<<"not available"<<totalseats-numberOfTickets<<endl;
	}
}
void movie::putdata() {

	cout<<"------------------------------------------------------"<<endl;
    cout << "Movie Name: " << movieName << endl;
    cout << "Show Time: " << showTime << endl;
    cout << "Number of Tickets: " << numberOfTickets << endl;
    //cout << "Ticket Price: " << ticketPrice << endl;
    cout<<"Booking price is : 150  RS "<<endl;
    cout << "Total  Amount: " << numberOfTickets*ticketPrice << endl;
}
int main()
{
	movie m;
	
	m.getdata();
	m.bookingseats();
	m.putdata();
	
	return 0;
}
