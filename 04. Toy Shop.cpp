#include <iostream>
using namespace std;

int main()
{


	//.Пъзел - 2.60 лв.
	//· Говореща кукла - 3 лв.
	//· Плюшено мече - 4.10 лв.
	//	· Миньон - 8.20 лв.
	//	· Камионче - 2 лв.		
	double price;
	cin >> price;
	int puzzle;
	cin >> puzzle;
	int doll;
	cin >> doll;
	int bear;
	cin >> bear;
	int minions;
	cin >> minions;
	int trucks;
	cin >> trucks;
	int toys = puzzle + doll + bear + minions + trucks;
	double totalprice = puzzle * 2.60 + doll * 3 + bear * 4.10 + minions * 8.20 + trucks * 2;



	if (toys >= 50)
		totalprice *= 0.75;

	totalprice *= 0.9;
		
	
	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalprice >= price) cout << "Yes! "<< totalprice-price << " lv left." << endl;
	else cout << "Not enough money! " << price - totalprice << " lv needed." << endl;
	
}


