#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int numbers;
	cin >> numbers;
	int maxNumber = INT_MAX;
	int minNumber = INT_MIN;

	for (int  i = 0; i < numbers; i++)
	{
		int input;
		cin >> input;
		if (input < maxNumber) {
			maxNumber = input;
		}
		if (input > minNumber) {
			minNumber = input;
		}
		
		

	}
	cout << "Max number: " << minNumber << endl;
	cout << "Min number: " << maxNumber << endl;
	

}


