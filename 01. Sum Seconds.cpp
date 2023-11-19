
#include <iostream>
using namespace std;

int main()
{
	int firsttime, secondtime, thirdtime;
	cin >> firsttime >> secondtime >> thirdtime;

	int totaltime = firsttime + secondtime + thirdtime;
	int minute = totaltime / 60;
	int seconds = totaltime% 60;

	if (seconds < 10) {
		cout << minute << ":0" << seconds << endl;

	}
	else {
		cout << minute <<":"<< seconds << endl;
	}
}

