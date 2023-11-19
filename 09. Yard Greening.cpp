#include <iostream>
using namespace std;


int main()
{
	double  meters;
	cin >> meters;
	double endsum = meters * 7.61;//final price=pricepermeter-discount; discount=0.18*endsum
	double discount = 0.18 * endsum;
	double total = endsum - discount;
	cout << "The final price is: " << total << " lv."<<endl;
	cout << "The discount is: " << discount << " lv." << endl;

	return 0;


}


