#include <iostream>
using namespace std;

int main()
{
	
	double budget;
	cin >> budget;
	string season;
	cin >> season;
	double price = 0.0;
	string type = "";

	if (budget <= 100) {
		cout << "Somewhere in Bulgaria" << endl;
		if (season == "summer") {
			price = 0.30 * budget;
			type = "Camp";
		}
		else {
			price = 0.70 * budget;
			type = "Hotel";
		}
	}
	else if (budget <= 1000&&budget>100) {
		cout << "Somewhere in Balkans" << endl;

		if (season == "summer") {
			price = 0.40 * budget;
			type = "Camp";
		}
		else {
			price = 0.80 * budget;
			type = "Hotel";
		}

	}
	else if (budget > 1000) {
		cout << "Somewhere in Europe" << endl;
			price = 0.9 * budget;
			type = "Hotel";
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << type << " - " << price << endl;

}

