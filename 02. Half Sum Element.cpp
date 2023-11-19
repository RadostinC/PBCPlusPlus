#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int input;
	cin >> input;
	int sum = 0;
	int maxNumber = INT_MIN;

	for (int i = 0; i < input; i++) {
		int number;
		cin >> number;
		sum += number;
		if (number > maxNumber) {
			maxNumber = number;
		}
		
	}
	sum = sum-maxNumber;
	if (maxNumber == sum) {
		cout << "Yes" << endl;
		cout << "Sum = " << sum;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << abs(maxNumber - sum) << endl;
	}
}

