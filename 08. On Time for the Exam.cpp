#include <iostream>
using namespace std;

int main()
{
   /*������� ��� ������� ��� �� ������ � ���� ����� �� 0 �� 23.

� ������� ��� ������� ������ �� ������ � ���� ����� �� 0 �� 59.

� ������� ��� ������� ��� �� ���������� � ���� ����� �� 0 �� 23.

� ���������� ��� ������� ������ �� ���������� � ���� ����� �� 0 �� 59.*/
	int starthour;
	cin >> starthour;
	int startminute;
	cin >> startminute;
	int endhour;
	cin >> endhour;
	int endminute;
	cin >> endminute;

	int examTimeStart = starthour * 60 + startminute;//570
	int arriveTime = endhour * 60 + endminute;//590
	int diff = examTimeStart - arriveTime;

	
	if (diff > 30) {
		//Early
		cout << "Early" << endl;
	}
	else if (diff >= 0) {
		//On time 
		cout << "On time" << endl;
	}
	else  {
		//Late 
		cout << "Late" << endl;
	}
	//print 
	if (diff != 0) {
		int absinminutes = abs(diff);
		if (absinminutes < 60) {
			cout << absinminutes << " minutes";
		}
		else {
			int hours = absinminutes / 60;
			int minutes = absinminutes % 60;

			cout << hours << ":" << string(minutes < 10, '0') << minutes << " hours";
		}
		if (diff > 0) {
			cout << " before";
		}
		else cout << " after";
	}
	cout << " the start" << endl;

}


