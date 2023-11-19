#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int counterPrint = 1;
	bool isBigger = false;

	for (int rows = 1; rows <= number; rows++) {
		for (int column = 1; column <= rows; column++) {
			if (counterPrint > number) {
				isBigger=true;
				break;
			}
			cout << counterPrint << " ";
			counterPrint++;

		}
		if (isBigger) {
			break;
		}
		cout << endl;
	}
}


