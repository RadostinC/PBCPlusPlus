#include <iostream>
using namespace std;


int main()
{
    double money;//������ �� ������ �� ���
    cin >> money;

    double incomePerDay;//����,��������� �� �������� 
    cin >> incomePerDay;

    double expenses;//������� �� ������ �� ����� ������
    cin >> expenses;

    double presentPrice;
    cin >> presentPrice;

    double savedMoney = 5 * money;
    double wonMoney = 5 * incomePerDay;

    double totalSavedMoney = (savedMoney + wonMoney) -expenses ;
    
    cout.setf(ios::fixed);
    cout.precision(2);


    if (totalSavedMoney >= presentPrice) {
        cout << "Profit: " << totalSavedMoney << " BGN, the gift has been purchased." << endl;
    }
    else {
        cout << "Insufficient money: " << presentPrice - totalSavedMoney<< " BGN." << endl;
    }


}


