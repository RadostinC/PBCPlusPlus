#include <iostream>
using namespace std;

int main()
{

	int degrees;
	cin >> degrees;
	string type;
	cin >> type;
	string outfit = "";
	string shoes = "";

	if (10 <= degrees && degrees <= 18) {
		if (type == "Morning") {
			outfit = "Sweatshirt";
			shoes = "Sneakers";
		}
		else if (type == "Evening") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
		else if (type == "Afternoon") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}
	else if (18 < degrees && degrees <= 24) {
		if (type == "Morning") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
		else if (type == "Evening") {
			outfit = "Shirt";
			shoes = "MOccasins";

		}
		else if (type == "Afternoon") {
			outfit = "T-Shirt";
			shoes = "Sandals";
		}
	}
	else {
		if (type == "Morning") {
			outfit = "T-Shirt";
			shoes = "Sandals";
		}
		else if (type == "Afternoon") {
			outfit = "Swim Suit";
			shoes = "Barefoot";
		}
		else if (type == "Evening") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}
	//"It's {градуси} degrees, get your {облекло} and {обувки}."
	cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes<<"." << endl;
}

	


