#include <iostream>
using namespace std;

int main()
{
    int firstNumber;
    cin >> firstNumber;

    int input;
    cin >> input;

    int sum = 0;

    while (sum<=firstNumber) {
        sum += input;

        
        if (sum >= firstNumber) {
            break;
        }
        cin >> input;
    }
    cout << sum << endl;

}


