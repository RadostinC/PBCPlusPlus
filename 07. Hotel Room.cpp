#include <iostream>
using namespace std;

int main()
{
	string month;
	cin >> month;
	int days;
	cin >> days;
	double studio = 0.0;
	double apartments = 0.0;

	if (month == "May" || month == "October") {
		studio = 50*days;
		apartments = 65 * days;
		if (days >7&&days<=14) {
			studio = studio - 0.05 * studio;
		}
		else if (days >14) {
			apartments = apartments - 0.10 * apartments;
			studio = studio - 0.30 * studio;
		}

	}
	else if (month == "June" || month == "September") {
		studio = 75.20 * days;
		apartments = 68.70 * days;
		if (days > 14) {
			studio = studio - 0.20 * studio;
			apartments = apartments - 0.10 * apartments;
		}
	}
	else if (month == "July" || month == "August") {
		studio = 76 * days;
		apartments = 77 * days;
		if (days > 14) {
			apartments = apartments - 0.10 * apartments;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Apartment: " << apartments << " lv." << endl;
	cout << "Studio: " << studio << " lv." << endl;
}


