#include <iostream>
#include <string>;
using namespace std;


int main()
{
	string daysInput, type, mark;
	getline(cin, daysInput);
	getline(cin, type);
	getline(cin, mark);
	int days = stoi(daysInput);
	
	double price = 0.0;
	int daysminus1 = days - 1;

	if (days-1 < 10) {
		if (type == "room for one person") {
			price = daysminus1 * 18.00;
		}
		else if (type == "apartment") {
			price = daysminus1 * 25.00;
			price = price - 0.30 * price;
		}
		else if(type=="president apartment"){
			price = daysminus1 * 35.00;
			price = price - 0.10 * price;
				
		}
	}
	else if (days - 1 <= 15 && days - 1 >= 10) {
		if(type == "room for one person") {
			price = daysminus1 * 18.00;
		}
		else if (type == "apartment") {
			price = daysminus1 * 25.00;
			price = price - 0.35 * price;

		}
		else if (type == "president apartment") {
			price = daysminus1* 35.00;
			price = price - 0.15 * price;

		}
	}
	else if (days-1 > 15) {
		if (type == "room for one person") {
			price = daysminus1 * 18.00;
		}
		else if (type == "apartment") {
			price = daysminus1 * 25.00;
			price = price - 0.5 * price;
		}
		else if (type == "president apartment") {
			price = daysminus1 * 35.00;
			price = price - 0.20 * price;

		}
	}
	if (mark == "positive") {
		price = price + 0.25 * price;

	}
	else if (mark == "negative") {
		price = price - 0.10 * price;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << price << endl;
}


