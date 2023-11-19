#include <iostream>
using namespace std;

int main()
{
	int groupCount;
	cin >> groupCount;
	int Musala = 0;
	int Monblanc = 0;
	int Kilimandjaro = 0;
	int K2 = 0;
	int Everest = 0;

	for (int i=0; i < groupCount; i++) {
		int personInGroup;
		cin >> personInGroup;

		if (personInGroup <= 5) {
			Musala += personInGroup;
		}
		else if (personInGroup <= 12 && personInGroup >= 6) {
			Monblanc += personInGroup;
		}
		else if (personInGroup <= 25 && personInGroup >= 13) {
			Kilimandjaro += personInGroup;

		}
		else if (personInGroup <= 40 && personInGroup >= 26) {
			K2 += personInGroup;
		}
		else if (personInGroup >= 41) {
			Everest += personInGroup;
		}
	}
	int totalPerson = Musala + Monblanc + Kilimandjaro + K2 + Everest;
	
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << 100.0 * Musala / totalPerson <<"%"<< endl;
	cout << 100.0 * Monblanc / totalPerson << "%" << endl;
	cout << 100.0 * Kilimandjaro / totalPerson << "%" << endl;
	cout << 100.0 * K2 / totalPerson << "%" << endl;
	cout << 100.0 * Everest / totalPerson << "%" << endl;
}


