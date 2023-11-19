#include <iostream>
using namespace std;

int main()
{
    int tabs;
    cin >> tabs;
    int salary;
    cin >> salary;

    for (int i = 0; i < tabs; i++) {
        string site;
        cin >> site;

        if (site == "Facebook") {
            salary -= 150;
        }
        else if (site == "Instagram") {
            salary -= 100;
        }
        else if (site == "Reddit") {
            salary -= 50;
        }

        if (salary == 0) {
            break;
        }
    }
    if (salary <= 0) {
        cout << "You have lost your salary." << endl;
    }
    else {
        cout << salary << endl;
    }
}


