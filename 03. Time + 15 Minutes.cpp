#include <iostream>
using namespace std;

int main()
{
	int starthours, startminutes;
	cin >> starthours >> startminutes;

	int timeinminutes = starthours * 60 + startminutes;
	int timeplus15 = timeinminutes + 15;
	int hour = timeplus15 / 60;
	int minutes = timeplus15 % 60;

	if (hour >= 24) {
		hour -= 24;
	}
	if (minutes < 10) {
		cout << hour << ":0" << minutes << endl;

	}
	else {
		cout << hour << ":" << minutes << endl;
	}


}

