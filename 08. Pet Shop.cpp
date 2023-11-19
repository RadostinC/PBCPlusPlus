#include <iostream>
using namespace std;
int main()
{
    int dog;
    cin >> dog;
    int cat;
    cin >> cat;

    double endDog = dog * 2.50;
    double endCat = cat * 4;

    double total = endCat + endDog;

    cout << total << " lv." << endl;
    return 0;
}


