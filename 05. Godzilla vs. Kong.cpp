#include <iostream>
using namespace std;


int main()
{
	/*Ѕюджет за филма Ц реално число в интервала[1.00 Е 1000000.00]

		–ед 2. Ѕрой на статистите Ц ц€ло число в интервала[1 Е 500]

		–ед 3. ÷ена за облекло на един статист Ц реално число в интервала[1.00 Е 1000.00]*/

	double budget;
	cin >> budget;
	int statistscount;
	cin >> statistscount;
	double clothingperperson;
	cin >> clothingperperson;

	double decor = budget * 0.1;//decor
	double totalpriceforclothing = statistscount * clothingperperson;
	if (statistscount > 150)
		totalpriceforclothing *= 0.9;//discount 

	double totalcosts = decor + totalpriceforclothing;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= totalcosts) {
	cout << "Action!" << endl; cout << "Wingard starts filming with " << budget - totalcosts << " leva left." << endl;
	}
	else {
		cout << "Not enough money!" << endl; cout << "Wingard needs " << totalcosts - budget << " leva more." << endl;
	}
}


