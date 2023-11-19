#include <iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int countTicketsAdult;
    cin >> countTicketsAdult;

    int countTicketsKid;
    cin >> countTicketsKid;

    double netPriceAdult;
    cin >> netPriceAdult;

    double priceTax;
    cin >> priceTax;

    double netPriceKid = netPriceAdult - (netPriceAdult * 0.7);

    double priceAdult = priceTax + netPriceAdult;

    double priceKid = netPriceKid + priceTax;

    double totalPriceAdult = countTicketsAdult * priceAdult;
        
  double totalPriceKid=countTicketsKid * priceKid;

    double allSum = totalPriceAdult + totalPriceKid;
    double won = allSum * 0.2;
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The profit of your agency from " << name << " tickets is "<<won<<" lv." << endl;
    

}

