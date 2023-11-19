#include <iostream>
#include <string>
using namespace std;

int main()
{
	string actor;
	getline(cin, actor);
	
	string academypoints;
	getline(cin, academypoints);
	double points = stod(academypoints);

	string jury;
	getline(cin, jury);
	int JuryCount = stod(jury);

	for (int i = 0; i < JuryCount; i++) {
		string juryname;
		getline(cin, juryname);
		string juryPointsInput;
		getline(cin, juryPointsInput);
		double juryPoints = stod(juryPointsInput);
		points += juryname.size() * juryPoints / 2;
		

		if (points > 1250.5) {
			break;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(1);
	if (points > 1250.5) {
		cout << "Congratulations, " << actor << " got a nominee for leading role with " << points << "!" << endl;
	}
	else {
		//Sorry, Zahari Baharov you need 247.5 more!
		cout << "Sorry, " << actor << " you need " << 1250.5 - points<<" more!"<< endl;
	}
}
  

