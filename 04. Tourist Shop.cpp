#include <iostream>
#include <string>
using namespace std;
using std::getline;

int main()
{
	double budget;
	cin >> budget;
	cin.ignore();

	int counterProducts = 0;
	double sum = 0.0;

	string input;
	double priceProduct;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (getline(cin, input)&&input != "Stop") {
		
		cin >> priceProduct;
		cin.ignore();
		
		counterProducts++;
		
		if (counterProducts % 3 == 0) {
			priceProduct /= 2;
		}
		if (sum + priceProduct > budget) {
			cout << "You don't have enough money!" << endl;
			cout << "You need " << (sum + priceProduct) - budget << " leva!" << endl;
			return 0;//end of the program
			//break->end the loop
		}
		else {
			sum += priceProduct;
		}
		
		
	}
	cout << "You bought " << counterProducts << " products for " << sum << " leva." << endl;
}


