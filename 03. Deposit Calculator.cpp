#include <iostream>
using namespace std;

int main()
{
	double deposit;
	cin >> deposit;
	int month;
	cin >> month;
	double percent;
	cin >> percent;

	double increase = deposit * (percent / 100);
	double increasepermonth = increase / 12;
	double totalsum = deposit + month * increasepermonth;

	cout << totalsum << endl;
	return 0;

}	


