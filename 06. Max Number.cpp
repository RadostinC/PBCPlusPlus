#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{

	string input;//100
	cin >> input;
	int maxNumber = INT_MIN;

	while (input != "Stop") {
		int number = stoi(input);
		if (maxNumber < number) {
			maxNumber = number;
		}

		
		cin >> input;
	}
	cout << maxNumber;
	return 0;
}


