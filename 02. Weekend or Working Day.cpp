#include <iostream>
using namespace std;
#include <string>;


int main()
{
	string dayofweek;
	cin >> dayofweek;

	if (dayofweek == "Monday" || dayofweek == "Tuesday" || dayofweek == "Wednesday" || dayofweek == "Thursday" || dayofweek == "Friday") {
		cout << "Working day" << endl;

	}
	else if(dayofweek=="Saturday"||dayofweek=="Sunday"){
		cout << "Weekend" << endl;

	}
	else {
		cout << "Error" << endl;
	}
}

