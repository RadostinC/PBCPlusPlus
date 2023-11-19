#include <iostream>
using namespace std;

int main()
{
	string username;
	cin >> username;
	string userpassword;
	cin >> userpassword;
	string input;
	cin >> input;

	while (input != userpassword) {
		cin >> input;

	}
	cout << "Welcome " << username << "!" << endl;
}


