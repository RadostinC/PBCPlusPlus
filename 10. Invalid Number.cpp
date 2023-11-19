#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	bool inrange = (number >= 100 && number <= 200 || number == 0);
	if (!inrange) {
		
			cout << "invalid" << endl;
		
	}
}


