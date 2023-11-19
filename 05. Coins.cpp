#include <iostream>
#include <math.h>
using namespace std;


int main()
{

	long double amount;
	cin >> amount;
	int coinsCount = 0;
	int cents = floor(amount * 100);

	while (cents > 0) {
		coinsCount++;
		if (cents >= 200) {
			cents -= 200;
		}
		else if (cents >= 100) {
			cents -= 100;
		}
		else if (cents >= 50) {
			cents -= 50;
		}
		else if (cents >= 20) {
			cents -= 20;

		}
		else if (cents >= 10) {
			cents -= 10;
		}
		else if (cents >= 5) {
			cents -= 5;
		}
		else if (cents >= 2) {
			cents -= 2;
		}
		else {
			cents -= 1;
		}
	}
	cout << coinsCount << endl;

}


