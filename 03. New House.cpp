#include <iostream>
using namespace std;

int main()
{
	string typeflowers;
	cin >> typeflowers;
	int countflowers;
	cin >> countflowers;
	int budget;
	cin >> budget;
	double price = 0.0;
	

	if (typeflowers == "Roses") {
		price = countflowers * 5;
		if (countflowers > 80) {
			price = price - 0.1 * price;
		}

	}else if (typeflowers == "Dahlias") {
		price = countflowers * 3.80;
		if (countflowers > 90) {
			price = price - 0.15 * price;
		}

	}else if (typeflowers=="Tulips") {
		price = countflowers * 2.80;
		if (countflowers > 80) {
			price = price - 0.15 * price;
		}
	}else if (typeflowers == "Narcissus") {
		price = countflowers * 3;

		if (countflowers < 120) {
			price = price + 0.15 * price;

		}

	}else if (typeflowers == "Gladiolus") {
		price = countflowers * 2.50;

		if (countflowers < 80) {
			price = price + 0.20 * price;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	if (budget >= price) {
		//"Hey, you have a great garden with {броя цвета} {вид цветя} and {останалата сума} leva left."

		cout << "Hey, you have a great garden with " << countflowers<<" " << typeflowers << " and " << budget - price << " leva left." << endl;
	}
	else {
		//"Not enough money, you need {нужната сума} leva more."
		cout << "Not enough money, you need " << price - budget << " leva more." << endl;
	}
}


