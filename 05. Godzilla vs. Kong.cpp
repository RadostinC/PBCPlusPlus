#include <iostream>
using namespace std;


int main()
{
	/*������ �� ����� � ������ ����� � ���������[1.00 � 1000000.00]

		��� 2. ���� �� ���������� � ���� ����� � ���������[1 � 500]

		��� 3. ���� �� ������� �� ���� ������� � ������ ����� � ���������[1.00 � 1000.00]*/

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


