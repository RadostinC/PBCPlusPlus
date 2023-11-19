#include <iostream>
using namespace std;

int main()
{
	string type;
	cin >> type;
	int rows;
	cin >> rows;
	int column;
	cin >> column;
	int totalseats = rows * column;
	double price = 0.0;

	if (type == "Premiere") {
		price = totalseats * 12.00;
	}
	else if (type == "Normal") {
		price = totalseats * 7.50;
	}
	else if (type == "Discount") {
		price = totalseats * 5.00;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << price << " leva"<<endl;
}


