#include <iostream>
using namespace std;

int main()
{
    int firstNumber;
    cin >> firstNumber;
    int lastNumber;
    cin >> lastNumber;
    int magicNumber;
    cin >> magicNumber;
    int  combination = 0;
    bool isFound = false;

    for (int i = firstNumber; i <= lastNumber; i++) {
        for (int j = firstNumber; j <= lastNumber; j++) {
            combination++;
            if (i + j == magicNumber) {
                cout << "Combination N:" << combination << " (" << i << " + " << j << " = " << i + j << ")" << endl;
                isFound = true;
                break;

            }
        }
        if (isFound) {
            break;
        }
    }
    if (!isFound) {
        cout << combination << " combinations - neither equals " << magicNumber << endl;
    }
    
}


