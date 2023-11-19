#include <iostream>
using namespace std;


int main()
{
	int number;
	cin >> number;
	double bonuspoints = 0.0;

	if (number<=100){
		bonuspoints += 5;
	}
	else if ( number>1000){
		 
		bonuspoints = number * 0.1;
	}
	else  {
		
		bonuspoints = number * 0.2;
	}

	if (number % 2 == 0) {
		bonuspoints += 1;

	}else if(number%10== 5) {
		bonuspoints += 2;

	}

	cout << bonuspoints << endl;
	cout << bonuspoints + number << endl;

}


