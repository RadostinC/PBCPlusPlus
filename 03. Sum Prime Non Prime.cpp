#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
 
	string input;
	int primeSum=0, nonPrimeSum = 0;
	

	while ( input != "stop") {
		int number = stoi(input);

		if (number < 0) {
			cout << "Number is negative" << endl;
		}
		else {
			bool isPrime = true;
			double numberSqrt = sqrt(number);

			for (int i = 2; i <= numberSqrt; i++) {
				if (number % i == 0) {
					isPrime = false;
					break;

				}
			}
			if (isPrime) {
				primeSum += number;

			}
			else {
				nonPrimeSum += number;
			}
		}
		cin >> input;
	}
	cout << "Sum of all prime numbers is: " << primeSum << endl;
	cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;
}

