#include <iostream>
#include <string>
using namespace std;
using std::string;
using std::cout;
using std::getline;

int main()
{
	string film;
	getline(cin, film);
	int freeSeats;
	
	string ticketType;
	int standartCount = 0, kidsCount = 0, studentsCount = 0, currentSoldTicket = 0, totalSoldTicket = 0;;
	

	while (film != "Finish") {
		cin >> freeSeats;
		cin >> ticketType;

		while (ticketType != "End") {
			if (ticketType == "standard") {
				standartCount++;
			}
			else if (ticketType == "kid") {
				kidsCount++;
			}
			else if (ticketType == "student") {
				studentsCount++;
			}

			currentSoldTicket++;
			if (currentSoldTicket == freeSeats) {
				break;
			}

			
			

			cin >> ticketType;
		}

		double fillPercentage = 100.0 * currentSoldTicket / freeSeats;

		cout.setf(ios::fixed);
		cout.precision(2);

		cout << film << " - " << fillPercentage << "% full." << endl;
		totalSoldTicket += currentSoldTicket;
		currentSoldTicket = 0;
		cin >> ws;

		getline(cin, film);
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Total tickets: " << totalSoldTicket<< endl;
	cout << 100.0 * studentsCount / totalSoldTicket << "% student tickets." << endl;
	cout << 100.0 * standartCount / totalSoldTicket << "% standard tickets." << endl;
	cout << 100.0* kidsCount / totalSoldTicket << "% kids tickets." << endl;
}


