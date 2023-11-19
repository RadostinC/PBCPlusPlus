#include <iostream>
using namespace std;

int main()
{
	
	
	/*Бюджетът на Петър - реално число в интервала [0.0…100000.0]
	

	2. Броят видеокарти - цяло число в интервала [0…100]

	3. Броят процесори - цяло число в интервала [0…100]

	4. Броят рам памет - цяло число в интервала [0…100]*/
	/*Видеокарта – 250 лв./бр.

·	 Процесор – 35% от цената на закупените видеокарти/бр.

·	 Рам памет – 10% от цената на закупените видеокарти/бр */


	double budget;
	cin >> budget;
	int vc;
	cin >> vc;
	int processors;
	cin >> processors;
	int ram;
	cin >> ram;

	double vcsum = vc * 250;
	double priceperprocessor = 0.35*vcsum;
	double processorsum = processors * priceperprocessor;
	double priceperram = 0.10 * vcsum;
	double ramsum = ram * priceperram;
	double total = vcsum + processorsum + ramsum;


	if (vc > processors) {
		total *= 0.85;
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	if (total > budget) {
		/*"Not enough money! You need {нужна сума} leva more!"*/

		cout << "Not enough money! You need " << total - budget << " leva more!" << endl;

	}
	else {
		/*"You have {остатъчен бюджет} leva left!"*/
		cout << "You have " << budget - total << " leva left!" << endl;
	}



}

