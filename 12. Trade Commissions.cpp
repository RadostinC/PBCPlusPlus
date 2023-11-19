#include <iostream>
using namespace std;

int main()
{
	string city;
	cin >> city;
	double sales;
	cin >> sales;
	double commision = -0.1;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (city == "Sofia") {
		if (sales >= 0 && sales <= 500) {
			commision = 0.05 * sales;
		}
		else if (sales > 500 && sales <= 1000) {
			commision = 0.07 * sales;
		}
		else if (sales > 1000 && sales <= 10000) {
			commision = 0.08 * sales;
		}
		else if (sales > 10000) {
			commision = 0.12 * sales;
		}
	}
	else if (city == "Varna") {
		if (sales >= 0 && sales <= 500) {
			commision = 0.045 * sales;
		}
		else if (sales > 500 && sales <= 1000) {
			commision = 0.075 * sales;
		}
		else if (sales > 1000 && sales <= 10000) {
			commision = 0.10 * sales;
		}
		else if (sales > 10000) {
			commision = 0.13 * sales;

		}
	}
	else if (city == "Plovdiv") {
		if (sales >= 0 && sales <= 500) {
			commision = 0.055 * sales;
		}
		else if (sales > 500 && sales <= 1000) {
			commision = 0.08 * sales;
		}
		else if (sales > 1000 && sales <= 10000) {
			commision = 0.12 * sales;
		}
		else if (sales > 10000) {
			commision = 0.145 * sales;
		}
	}
	
	if (city == "Sofia" || city == "Plovdiv" || city == "Varna") {
		if (commision <= 0) {
			cout << "error" << endl;
		}
		else {
			cout << commision << endl;
		}
	}
	else {
		cout << "error" << endl;
	}
}
