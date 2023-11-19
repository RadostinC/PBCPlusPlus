#include <iostream>
#include <cmath>
using namespace std;
using std::pow;

int main()
{
	const int numberpowered = 2;
	int n;
	cin >> n;

	for (int i = 0; i <= n; i += 2) {
		cout << pow(numberpowered, i) << endl;
	}
}