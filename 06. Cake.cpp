#include <iostream>
#include <string>
using namespace std;

int main()
{
	int width;//10
	cin >> width;
	int heigh;//10
	cin >> heigh;
	int area = width * heigh;//100 pieces

	string input; //number or Stop
	cin >> input;

	while (input != "STOP"||area==0) {
		int piece = stoi(input);
		area -= piece;
		if (area <= 0) {
			break;
		}
		cin >> input;
	}

	if (area <= 0) {
		cout << "No more cake left! You need " << abs(area) << " pieces more." << endl;
	}
	else {
		cout << area << " pieces are left." << endl;
	}
}


