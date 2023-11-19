	#include <iostream>
	#include <string>
	using namespace std;

	int main()
	{
		int hour;
		cin >> hour;
		string dayofweek;
		cin >> dayofweek;

		if (hour >= 10 && hour <= 18) {
			if (dayofweek == "Sunday") {
				cout<< "closed" << endl;
			}
			else {
				cout << "open" << endl;
			}
		}
		else {
			cout << "closed" << endl;
		}


	}

