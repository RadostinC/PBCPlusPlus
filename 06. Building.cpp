#include <iostream>
using namespace std;


int main()
{
    int floor;
    cin >> floor;
    int rooms;
    cin >> rooms;

    for (int i = floor; i >= 1; i--) {
        for (int j = 0; j < rooms; j++) {

            if (i == floor) {
                cout << "L" << i << j << " ";
            }
            else if (i % 2 == 0) {
                cout << "O" << i << j << " ";
            }
            else if (i % 2 == 1) {
                cout << "A" << i << j << " ";
            }
        }cout << endl;
    }
}


