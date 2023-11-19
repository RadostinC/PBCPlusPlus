#include <iostream>
using namespace std;

int main() {
    int K;
    int L;
    int M;
    int N;
    cin >> K;
    cin >> L;
    cin >> M;
    cin >> N;
    int counter = 0;
    bool hasEnded = false;

    for (int firstNumFirstDig = K; firstNumFirstDig <= 8; firstNumFirstDig++)
    {
        for (int firstNumSecondDig = 9; firstNumSecondDig >= L; firstNumSecondDig--)
        {
            for (int secondNumFirstDig = M; secondNumFirstDig <= 8; secondNumFirstDig++)
            {
                for (int secondNumSecondDig = 9; secondNumSecondDig >= N; secondNumSecondDig--)
                {
                    bool isValid = firstNumFirstDig % 2 == 0 && secondNumFirstDig % 2 == 0 &&
                        firstNumSecondDig % 2 != 0 &&
                        secondNumSecondDig % 2 != 0;
                    int firstNum = firstNumFirstDig * 10 + firstNumSecondDig;
                    int secondNum = secondNumFirstDig * 10 + secondNumSecondDig;
                    if (isValid && firstNum == secondNum) {
                        cout << "Cannot change the same player." << endl;
                    }
                    else if (isValid && firstNum != secondNum) {
                        cout << firstNumFirstDig << firstNumSecondDig << " - " << secondNumFirstDig << secondNumSecondDig << endl;
                        counter++;
                    }
                    if (counter >= 6) {
                        hasEnded = true;
                    }
                    if (hasEnded) {
                        break;
                    }

                }
                if (hasEnded) {
                    break;
                }

            }
            if (hasEnded) {
                break;
            }
        }
        if (hasEnded) {
            break;
        }
    }
}


