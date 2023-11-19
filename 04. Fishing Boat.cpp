#include <iostream>
using namespace std;

int main()
{
	int budget;
	cin >> budget;
	string season;
	cin >> season;
	int fishers;
	cin >> fishers;
	double price = 0.0;

	if (season == "Spring") {
		price = 3000;

		if (fishers <= 6) {
			price = price - 0.10 * price;
		}
		else if (fishers >= 7 && fishers <= 11) {
			price = price - 0.15 * price;
		}
		else {
			price = price - 0.25 * price;
		}

	}
	else if (season == "Summer" || season == "Autumn") {
		price = 4200;

		if (fishers <= 6) {
			price = price - 0.10 * price;
		}
		else if (fishers >= 7 && fishers <= 11) {
			price = price - 0.15 * price;
		}
		else {
			price = price - 0.25 * price;
		}
	}
	else if (season == "Winter") {
		price = 2600;
		if (fishers <= 6) {
			price = price - 0.10 * price;
		}
		else if (fishers >= 7 && fishers <= 11) {
			price = price - 0.15 * price;
		}
		else {
			price = price - 0.25 * price;
		}
	}
	if(fishers%2==0&&season!="Autumn") {
		price = price - 0.05 * price;


	}

	cout.setf(ios::fixed);
	cout.precision(2);
	if (budget >= price) {
		//"Yes! You have {останалите пари} leva left.
		cout << "Yes! You have " << budget - price << " leva left." << endl;
	}
	else {
		//"Not enough money! You need {сумата, която не достига} leva."
		cout << "Not enough money! You need " << price - budget << " leva." << endl;
	}
}


