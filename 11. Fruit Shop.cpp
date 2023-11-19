#include <iostream>
using namespace std;


int main()
{
	string product;
	cin >> product;
	string dayofweek;
	cin >> dayofweek;
	double k;
	cin >> k;
	double price = 0.0;
	cout.setf(ios::fixed);
	cout.precision(2);

	if (dayofweek == "Monday" || dayofweek == "Tuesday" || dayofweek == "Wednesday" || dayofweek == "Thursday"
		|| dayofweek == "Friday") {

		if (product == "banana") {
			cout << 2.50 * k;
		}
		else if (product == "apple") {
			cout << 1.20 * k;
		}
		else if (product == "orange") {
			cout << 0.85 * k;
		}
		else if (product == "grapefruit") {
			cout << 1.45 * k;
		}
		else if (product == "kiwi") {
			cout << 2.70 * k;
		}
		else if (product == "pineapple") {
			cout << 5.50 * k;

		}
		else if (product == "grapes") {
			cout << 3.85 * k;
		}
		else {
			cout << "error" << endl;
		}

	}
	else if (dayofweek == "Saturday" || dayofweek == "Sunday") {
		if (product == "banana") {
			cout << 2.70 * k;
		}
		else if (product == "apple") {
			cout << 1.25 * k;
		}
		else if (product == "orange") {
			cout << 0.90 * k;
		}
		else if (product == "grapefruit") {
			cout << 1.60 * k;
		}
		else if (product == "kiwi") {
			cout << 3.00 * k;
		}
		else if (product == "pineapple") {
			cout << 5.60 * k;

		}
		else if (product == "grapes") {
			cout << 4.20 * k;
		}
		else {
			cout << "error" << endl;
		}
	}
	else {
		cout << "error" << endl;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	
}


