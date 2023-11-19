#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
	string input;
	cin >> input;

	int minNumber = INT_MAX;

	while (input != "Stop") {
		int number = stoi(input);

		if (minNumber > number) {
			minNumber = number;
		}
		cin >> input;

	}
	cout << minNumber;
}

