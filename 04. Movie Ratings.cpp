#include <iostream>
#include <string>
#include<climits>
using namespace std;
using std::getline;

int main()
{
	
	int numbersOfFilms;
	cin >> numbersOfFilms;
	cin.ignore();
	double movieRating;
	string lowestFilm;
	string higestFilm;
	double ratingSum = 0;

	double higestRating = INT_MIN;
	double lowestRating = INT_MAX;
	
	for (int i = 1; i <= numbersOfFilms; i++)
	{
		string film;
		getline(cin, film);
		cin >> movieRating;
		cin.ignore();

		if (movieRating  < lowestRating) {//най-малък рейтинг 
			lowestRating = movieRating;
			lowestFilm = film;
		}
		if (movieRating  > higestRating) {
			higestRating =movieRating ;//най-голям рейтинг
			higestFilm = film;
		}
		ratingSum +=movieRating ;

	}
	double averageRating = ratingSum / numbersOfFilms;
	cout.setf(ios::fixed);
	cout.precision(1);
	cout << higestFilm << " is with highest rating: " << higestRating << endl;
	cout << lowestFilm << " is with lowest rating: " << lowestRating << endl;
	cout << "Average rating: " << averageRating << endl;


}


