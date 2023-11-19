#include <iostream>
using namespace std;


int main()
{
    int packofpensils;
    cin >> packofpensils;
    int packofmarks;
    cin >> packofmarks;
    int preparatinliters;
    cin >> preparatinliters;
    int discount;
    cin >> discount;

    //Пакет химикали - 5.80 лв.
   // • Пакет маркери - 7.20 лв.
      //  • Препарат - 1.20 лв(за литър)

    double  pricepensils = packofpensils * 5.80;
    double  pricemarks = packofmarks * 7.20;
    double pricepreparat = preparatinliters * 1.20;

    double summaterials = pricepensils + pricemarks + pricepreparat;
    double percent = discount * 0.01;
    double totalsum = summaterials - (summaterials *percent);

    cout << totalsum << endl;
    return 0;
}


