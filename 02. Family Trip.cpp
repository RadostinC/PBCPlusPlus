#include <iostream>
using namespace std;


int main()
{
	double budget;
	cin >> budget;
	int days;
	cin >> days;
	double pricePerDay;
	cin >> pricePerDay;
	int percentOutcome;
	cin >> percentOutcome;

	if (days > 7) {
		pricePerDay = pricePerDay - (pricePerDay * 0.05);

	}
	double totalPrice = pricePerDay * days;

	double percent = percentOutcome * 0.01;
	double moneyWithOutcome = percent * budget;
	double totalMoney = totalPrice + moneyWithOutcome;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (budget >= totalMoney) {
		cout << "Ivanovi will be left with " << budget - totalMoney << " leva after vacation." << endl;
			
	}
	else {
		cout << totalMoney - budget << " leva needed." << endl;
	}
}



