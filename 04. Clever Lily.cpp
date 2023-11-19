#include <iostream>
using namespace std;

int main()
{
	int age;
	cin >> age;
	double price;
	cin >> price;
	int toy;
	cin >> toy;
	int money = 10;
	int  savedMoney = 0;
	

	

	for (int years = 1; years <= age; years++) {

		if (years  % 2 == 0) {
			savedMoney += money - 1;//четен рожден ден 2 4 6 8
			money += 10;
			//парите се увеличават с 10 лв. всяка четна година 
		}
		else {//нечетно
			savedMoney += toy;				//брой на играчки, който получава на всяка нечетна година 

		}
	}
	

	
	cout.setf(ios::fixed);
	cout.precision(2);
	if (savedMoney >= price) {
		cout << "Yes! " << savedMoney - price << endl;
	}
	else {
		cout << "No! " << price - savedMoney << endl;
	}

}


