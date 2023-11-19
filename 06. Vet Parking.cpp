#include <iostream>
using namespace std;


int main()
{
    int days;
    cin >> days;
    int hoursPerDay;
    cin >> hoursPerDay;
    double tax = 0;
    double total = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    for (int day = 1; day <= days; day++) {
        for (int hour = 1; hour <= hoursPerDay; hour++) {
            if (day % 2 == 0 && hour % 2 == 1) {
                tax += 2.50;
                
            }
            else if (day % 2 == 1 && hour % 2 == 0) {
                tax += 1.25;
            }
            else {
                tax += 1;
            }
            
        }
        cout << "Day: " << day << " - " << tax << " leva" << endl;
        total += tax;
        tax = 0;
    }
    cout << "Total: " << total <<" leva" <<endl;
}


