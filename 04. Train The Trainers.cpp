#include <iostream>
#include <string>
using namespace std;
using std::string;

int main()
{
	int countMark;
	cin >> countMark;

	string input;
	cin >> input;
	double markSum = 0;


	while (input != "Finish") {
		for (int i = 0; i < countMark; i++) {
			double currentMark;
			cin >> currentMark;
			markSum += currentMark;
			



		}
		cout << input << " - " << markSum;
		markSum == 0;


		getline(cin, input);
	}
}


