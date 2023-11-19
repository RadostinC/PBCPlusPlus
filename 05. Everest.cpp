	#include <iostream>
	#include <string>
	using namespace std;
	using std::cout;
	using std::getline;

	int main()
	{
		string input;

		int climbMetersPerDay;

		int daysCounter = 1;
		int sumOfClimbingMeters = 5364;


		while (getline(cin,input)&&input != "END") {
			cin >> climbMetersPerDay;
			cin.ignore();

			if (input == "Yes") {
				daysCounter++;

			}

			sumOfClimbingMeters += climbMetersPerDay;
			if (sumOfClimbingMeters >= 8848) {

				break;
			}
			if (daysCounter == 5 ) {
				break;
			}

		
		
		}
		if (sumOfClimbingMeters >= 8848) {
			cout << "Goal reached for " << daysCounter << " days!" << endl;
		}
		else {
			cout << "Failed!" << endl;
			cout << sumOfClimbingMeters << endl;
		}

		return 0;
	}


