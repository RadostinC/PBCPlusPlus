#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
	int validCombintionsCount = 0;

	for (int firstNumber = 0; firstNumber <=number; firstNumber++){
		for (int secondNumber = 0; secondNumber <=number; secondNumber++) {
			for (int thirdNumber = 0; thirdNumber <=number ; thirdNumber++) {
				if (firstNumber + secondNumber + thirdNumber == number) {
					validCombintionsCount++;
				}
			}

		}
	}
	cout << validCombintionsCount << endl;
}


