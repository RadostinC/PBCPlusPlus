#include <iostream>
using namespace std;

int main()
{

    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    string operation;
    cin >> operation;

    if ((operation == "/" || operation == "%") && n2 == 0){
        cout << "Cannot divide " << n2 << " by zero" << endl;

        
    }
    else if (operation == "/") {
        double divisionresult = 1.0*n1 / n2;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << n1 << " / " << n2 << " = " << divisionresult << endl;

    }
    else {
        int operationresult = 0;
        bool showParity = true;

        if (operation == "+") {
            operationresult = n1 + n2;
        }
        else if (operation == "-") {
            operationresult = n1 - n2;
        }
        else if (operation == "*") {
            operationresult = n1 * n2;
        }
        else if (operation == "%") {
            operationresult = n1 % n2;
            showParity = false; 
        }
        cout << n1 << " " << operation << " " << n2 << " = " << operationresult;
        if (showParity) {
            cout << " - ";

            if (operationresult % 2 == 0) cout << "even";
            else cout << "odd";

        }
        cout << endl;
    }
}
    

