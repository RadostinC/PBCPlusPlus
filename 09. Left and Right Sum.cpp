#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int leftsum = 0;
	int rightsum = 0;

	for (int i = 0; i < n; i++) {
		//leftsum
		int numbers;
		cin >> numbers;
		leftsum += numbers;


	}
	for (int i = 0; i < n; i++)
	{
		//right sum
		int numbers;
		cin >> numbers;
		rightsum += numbers;
	}
	if (leftsum == rightsum) {
		cout << "Yes, sum = " << leftsum << endl;
	}
	else {
		cout << "No, diff = " << abs(leftsum - rightsum) << endl;
	}
}


