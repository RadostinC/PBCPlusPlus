#include <iostream>
using namespace std;

int main()
{
	int pages;
	cin >> pages;
	int pph;//pages per hour
	cin >> pph;
	int days;
	cin >> days;

	int totalhours = pages / pph;
	int hourperday = totalhours / days;


	cout << hourperday << endl;
	return 0;
}

