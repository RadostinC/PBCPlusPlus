#include <iostream>
#include<string>
#include <math.h>
using namespace std;

int main()
{
	int length;
	cin >> length;
	int heigh;
	cin >> heigh;
	int width;
	cin >> width;
	int meters = length * width * heigh;
	int sumBox = 0;
	bool isValid = false;

	string input;
	cin >> input;

	while (input != "Done") {
		int cardbox = stoi(input);
		sumBox += cardbox;
		if (meters <= sumBox) {
			isValid = true;
			break;

		}
		cin >> input;

	}
	if (isValid) {
		cout << "No more free space! You need " << abs(meters - sumBox) << " Cubic meters more." << endl;

	}
	else {
		cout << meters - sumBox << " Cubic meters left." << endl;
	}
}


