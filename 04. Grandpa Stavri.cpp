#include <iostream>
using namespace std;

int main()
{
	int days;
	cin >> days;
	double brandyVolume;//ракия
	double degreeBrandy;
	double sumBrandy = 0.0;
	double sumDegree = 0.0;
	for (int day = 1; day <= days; day++) {
		cin >> brandyVolume;
		cin >> degreeBrandy;

		sumBrandy += brandyVolume;
		sumDegree += brandyVolume * degreeBrandy;

		

	}
	double midDegrees = sumDegree / sumBrandy;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Liter: " << sumBrandy << endl;
	cout << "Degrees: " << midDegrees << endl;
	

	if (midDegrees < 38) {
		cout << "Not good, you should baking!" << endl;
	}
	else if (midDegrees >= 38 && midDegrees <= 42) {
		cout << "Super!" << endl;

	}
	else if (midDegrees > 42) {
		cout << "Dilution with distilled water!" << endl;
	}
}


