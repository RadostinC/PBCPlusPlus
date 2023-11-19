#include <iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	getline(cin, name);
	int days;
	cin >> days;
	int ticketCount;
	cin >> ticketCount;
	double ticketPrice;
	cin >> ticketPrice;
	int inputPercent;
	cin >> inputPercent;

	double sumPerDay = ticketCount * ticketPrice;
	double totalPeriodSum = sumPerDay * days;
	double percent = inputPercent * 0.01;//0.07
	double percentForCinema = percent * totalPeriodSum;
	
	double income = totalPeriodSum - percentForCinema;
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "The profit from the movie " << name << " is " << income << " lv." << endl;


}


