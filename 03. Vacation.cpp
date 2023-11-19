#include <iostream>
using namespace std;

int main() {
	double necessaryAmount, savings;
	cin >> necessaryAmount >> savings;

	int consecutiveSpendOperation = 0, daysCount=0;

	bool canSave = true;
	while (savings < necessaryAmount) {
		string operation;
		double operationAmount;
		cin >> operation >> operationAmount;
		daysCount++;
		if (operation == "save") {
			savings += operationAmount;

		}
		else if (operation == "spend") {
			if (operationAmount > savings) {
				savings = 0;

			}
			else {
				savings -= operationAmount;

			}
			
			if (++consecutiveSpendOperation == 5) {
				canSave = false;
				break;
			}
		}


	}
	if (canSave) {
		cout << "You saved the money for " << daysCount << " days." << endl;
	}
	else {
		cout << "You can't save the money." << endl;
		cout << daysCount;
	}

}