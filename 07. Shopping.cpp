#include <iostream>
using namespace std;

int main()
{
	
	
	/*�������� �� ����� - ������ ����� � ��������� [0.0�100000.0]
	

	2. ����� ���������� - ���� ����� � ��������� [0�100]

	3. ����� ��������� - ���� ����� � ��������� [0�100]

	4. ����� ��� ����� - ���� ����� � ��������� [0�100]*/
	/*���������� � 250 ��./��.

�	 �������� � 35% �� ������ �� ���������� ����������/��.

�	 ��� ����� � 10% �� ������ �� ���������� ����������/�� */


	double budget;
	cin >> budget;
	int vc;
	cin >> vc;
	int processors;
	cin >> processors;
	int ram;
	cin >> ram;

	double vcsum = vc * 250;
	double priceperprocessor = 0.35*vcsum;
	double processorsum = processors * priceperprocessor;
	double priceperram = 0.10 * vcsum;
	double ramsum = ram * priceperram;
	double total = vcsum + processorsum + ramsum;


	if (vc > processors) {
		total *= 0.85;
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	if (total > budget) {
		/*"Not enough money! You need {����� ����} leva more!"*/

		cout << "Not enough money! You need " << total - budget << " leva more!" << endl;

	}
	else {
		/*"You have {��������� ������} leva left!"*/
		cout << "You have " << budget - total << " leva left!" << endl;
	}



}

