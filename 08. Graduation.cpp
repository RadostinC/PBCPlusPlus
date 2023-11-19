#include <iostream>
using namespace std;

int main()
{
	string name;
	cin >> name;
	int yearInSchool = 1;
	double sumGrades = 0;
	bool failedOnce = false;


	cout.setf(ios::fixed);
	cout.precision(2);

	while (yearInSchool <= 12) {
		double grade;
		cin >> grade;
		
		if (grade < 4) {
			if (failedOnce) {
				break;
			}
			else
				failedOnce = true;
				continue;
		}
		sumGrades += grade;
		yearInSchool++;

	}
	double average = sumGrades / 12;
	cout.setf(ios::fixed);
	cout.precision(2);

	if (failedOnce) {
		cout << name << " has been excluded at " << yearInSchool << " grade" << endl;
	}
	else {
		cout << name << " graduated. Average grade: " << average << endl;
	}

	
}

