#include <iostream>
using namespace std;

int main()
{
    int paper;
    cin >> paper;

    int textile;
    cin >> textile;

    double  glue;
    cin >> glue;

    int percentDiscount;
    cin >> percentDiscount;
    
    double  pricePaper = paper * 5.80;
    double  priceTextile = textile * 7.20;
    double priceGlue = glue * 1.20;
    double totalPrice = priceGlue + pricePaper + priceTextile;
    double percent = percentDiscount * 0.01;
    double finalPrice = totalPrice - (totalPrice * percent);


    cout.setf(ios::fixed);
    cout.precision(3);
    cout << finalPrice << endl;
}


