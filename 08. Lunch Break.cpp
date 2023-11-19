#include <iostream>
#include<string>
#include <math.h>
using namespace std;

int main()
{
 /*Име на сериал – текст

2. Продължителност на епизод – цяло число в диапазона [10… 90]

3. Продължителност на почивката – цяло число в диапазона [10… 12*/

	string serial;
	getline(cin, serial);

	int episodeduration;
	cin >> episodeduration;
	int breaktime;
	cin >> breaktime;

	double  lunchduration = breaktime * 0.125;//lunch 1/8 от breaktime
	double restduration = breaktime * 0.25;//time за отдих
	double  freetime = episodeduration + lunchduration + restduration;

	if (breaktime>=freetime) {
		/*"You have enough time to watch {име на сериал} and left with {останало време} minutes free time."*/

		cout << "You have enough time to watch " << serial << " and left with "
			<< ceil(breaktime-freetime) << " minutes free time." << endl;
	}
	else {
		/*"You don't have enough time to watch {име на сериал}, you need {нужно време} more minutes."*/
		cout << "You don't have enough time to watch " << serial << ", you need " 
			<<ceil(freetime-breaktime) << " more minutes. " << endl;
	}
}


