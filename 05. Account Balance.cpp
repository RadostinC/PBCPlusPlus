#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	cin >> input;

	double balance = 0;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (input != "NoMoreMoney") {
		double  money = stod(input);

		if (money < 0) {
			cout << "Invalid operation!" << endl;
			break;
		}
		else {
			cout << "Increase: " << money << endl;
			balance += money;
		}
		cin >> input;
	}
	cout << "Total: " << balance << endl;
}


