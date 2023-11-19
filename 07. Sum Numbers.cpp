#include <iostream>
using namespace std;

int main()
{
	int input ;
	cin >> input;
	int sum = 0;
	for (int i = 1; i <=input; i++)
	{
		int number;
		cin >> number;

		sum = sum + number;
	}
	cout << sum << endl;
}

