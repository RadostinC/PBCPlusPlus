#include <iostream>
using namespace std;

int main()
{
	int tournaments;
	cin >> tournaments;
	int points;
	cin >> points;
	int totalPoints = 0;
	int wontournaments = 0;

	for (int i = 0; i < tournaments; i++) {
		
		string stage;
		cin >> stage;

		if (stage == "W") {
			totalPoints += 2000;
			wontournaments++;
		}
		else if (stage == "F") {
			totalPoints += 1200;

		}
		else if (stage == "SF") {
			totalPoints += 720;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Final points: " << totalPoints+points << endl;
	cout << "Average points: " << totalPoints / tournaments << endl;
	cout << 100.0 * wontournaments / tournaments << "%" << endl;

}


