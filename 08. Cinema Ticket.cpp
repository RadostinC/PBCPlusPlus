#include <iostream>
using namespace std;

int main()
{
	string dayofweek;
	cin >> dayofweek;

	if (dayofweek == "Monday"||dayofweek=="Tuesday"||dayofweek=="Friday") {
		cout << 12 << endl;

	}
	else if (dayofweek == "Wednesday" || dayofweek == "Thursday") {
		cout << 14 << endl;

	}
	else if (dayofweek == "Saturday" || dayofweek == "Sunday") {
		cout << 16 << endl;
	}
	
}

