#include <iostream>
#include<string>
#include <math.h>
using namespace std;

int main()
{
 /*��� �� ������ � �����

2. ��������������� �� ������ � ���� ����� � ��������� [10� 90]

3. ��������������� �� ��������� � ���� ����� � ��������� [10� 12*/

	string serial;
	getline(cin, serial);

	int episodeduration;
	cin >> episodeduration;
	int breaktime;
	cin >> breaktime;

	double  lunchduration = breaktime * 0.125;//lunch 1/8 �� breaktime
	double restduration = breaktime * 0.25;//time �� �����
	double  freetime = episodeduration + lunchduration + restduration;

	if (breaktime>=freetime) {
		/*"You have enough time to watch {��� �� ������} and left with {�������� �����} minutes free time."*/

		cout << "You have enough time to watch " << serial << " and left with "
			<< ceil(breaktime-freetime) << " minutes free time." << endl;
	}
	else {
		/*"You don't have enough time to watch {��� �� ������}, you need {����� �����} more minutes."*/
		cout << "You don't have enough time to watch " << serial << ", you need " 
			<<ceil(freetime-breaktime) << " more minutes. " << endl;
	}
}


