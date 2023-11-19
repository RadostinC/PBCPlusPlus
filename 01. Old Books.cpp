#include <iostream>
#include<string>
using namespace std;

int main()
{
	string favBook;
	getline(cin, favBook);


	string input;
	getline(cin, input);
	int bookscounts = 0;
	bool isFound = false;

	while (input != "No More Books") {
		if (favBook == input) {
			isFound = true;
			break;
		}

		bookscounts++;
		getline(cin, input);
	}
	if (isFound) {
		cout << " You checked " << bookscounts << " books and found it." << endl;
	}
	else {
		cout << "The book you search is not here!" << endl;
		cout << "You checked "<< bookscounts<<" books." << endl;
	}

}


