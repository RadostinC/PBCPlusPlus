#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	double radians;
	cin >> radians;

	double degree = radians * 180 / 3.14;

	cout << round(degree) << endl;
	return 0;
}
