#include <iostream>
using namespace std;

int main()
{
    int number1;
    cin >> number1;

    int number2;
    cin >> number2;

    for (int i = number1; i <= number2; i++) {
        int currentNumber = i, evenSum = 0, oddSum = 0;
        bool isEvenPosition = true;
        while (currentNumber != 0) {
            int lastDigit = currentNumber % 10;
    
            if (isEvenPosition) {
                evenSum += lastDigit;
            }
            else {
                oddSum += lastDigit;
            }
            isEvenPosition = !isEvenPosition;

            currentNumber /= 10;

        }
        if (evenSum == oddSum) {
            cout << i << " ";
        }
            
    }


}

