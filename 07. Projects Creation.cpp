#include <iostream>
using namespace std;


int main()
{
	string name;
	cin >> name;
	int project;
	cin >> project;

	int neededhours = project * 3;

	cout << "The architect " << name << " will need " << neededhours << " hours to complete " << project << " project/s.";
	return 0;
}

