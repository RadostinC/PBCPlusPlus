#include <iostream>
using namespace std;


int main()
{
	string destination;

	double  excursionPrice;
	

	double money;

	while (cin >> destination && destination != "End"  ) {
		cin >> excursionPrice;
		double savedMoney = 0;
		
		while (savedMoney < excursionPrice) {
			cin >> money;
			savedMoney += money;
		}
		cout << "Going to " << destination << "!" << endl;

	}
	return 0;
}


