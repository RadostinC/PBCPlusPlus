#include <iostream>
#include<string>
using namespace std;





int main()
{
	int goal = 10000;
	string input;
	getline(cin, input);

	int sumSteps = 0;
	int steps = stoi(input);
	while (sumSteps>=goal) {
		
		steps = stoi(input);
		if (input == "Going home") {
			
			getline(cin, input);
			sumSteps += steps;
			
		}
		int steps = stoi(input);
		sumSteps += steps;
		if (steps >= goal) {
			break;
		}
		getline(cin, input);
	}
	if (steps >= goal) {
		cout << "Goal reached! Good job!" << endl;
	}
	else {
		cout << goal - sumSteps << " more steps to reach goal." << endl;
	}
}


