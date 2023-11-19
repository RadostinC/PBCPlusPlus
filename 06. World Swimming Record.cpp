#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	/*Рекордът в секунди – реално число в интервала[0.00 … 100000.00]

		2. Разстоянието в метри – реално число в интервала[0.00 … 100000.00]

		3. Времето в секунди, за което плува разстояние от 1 м. - реално число в интервала[0.00 … 1000.00]*/
	double record;
	cin >> record;
	double meters;
	cin >> meters;
	double timepermeter;
	cin >> timepermeter;

	double timeinseconds = meters * timepermeter;//time Ivan in seconds
	double addedtime = floor(meters / 15) * 12.5;//added time 

	double totaltime = timeinseconds + addedtime;//total time Ivan
	cout.setf(ios::fixed);
	cout.precision(2);
	if (record > totaltime) {
		//"Yes, he succeeded! The new world record is {времето на Иван} seconds."
		cout << "Yes, he succeeded! The new world record is " << totaltime << " seconds." << endl;
	}
	else {
		//"No, he failed! He was {недостигащите секунди} seconds slower."
		cout << "No, he failed! He was " << totaltime - record << " seconds slower." << endl;

	}

	return 0;
}

