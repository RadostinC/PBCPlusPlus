#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int evenSum = 0;
	int oddSum = 0;

	for (int i = 0; i < n; i++) {
		int numbers;
		cin >> numbers;

		if (i % 2 == 0) {
			evenSum += numbers;

		}
		else {
			oddSum += numbers;
		}

	}
	if (evenSum == oddSum) {
		cout << "Yes" << endl;
		cout << "Sum = " << evenSum << endl;

	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << abs(evenSum - oddSum) << endl;
	}
}

