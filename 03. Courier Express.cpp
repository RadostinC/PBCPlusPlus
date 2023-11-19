	#include <iostream>
	using namespace std;
	using std::cout;


	int main()
	{
		double weightOfBox;//inKG
		cin>> weightOfBox;

		string type;
		cin >> type;

		int distance;//in KM
		cin >> distance;

		double price = 0.0;
		double markupPerKg = 0.0;
		double totalMarkup = 0.0;
		double markupPerKm = 0.0;

		if (type == "standard") {
			if (weightOfBox < 1) {
				price = 0.03;
			}
			else if (weightOfBox >= 1 && weightOfBox < 10) {
				price = 0.05;
			}
			else if (weightOfBox >= 10 && weightOfBox < 40) {
				price = 0.1;

			}
			else if (weightOfBox >= 40 && weightOfBox < 90) {
				price = 0.15;
			}
			else if (weightOfBox >= 90 && weightOfBox < 150) {
				price = 0.20;
			}
		}
		else if (type == "express") {
			
			if (weightOfBox < 1) {
				price = 0.03;
				markupPerKg = 0.8 * price;
				
			}
			else if (weightOfBox >= 1 && weightOfBox < 10) {
				price = 0.05;
				markupPerKg = 0.4 * price;
				
			}
			else if (weightOfBox >= 10 && weightOfBox < 40) {
				price = 0.1;
				markupPerKg = 0.05 * price;
				

			}
			else if (weightOfBox >= 40 && weightOfBox < 90) {
				price = 0.15;
				markupPerKg= 0.02 * price;
				
			}
			else if (weightOfBox >= 90 && weightOfBox < 150) {
				price = 0.20;
				markupPerKg= 0.01 * price;
				
			}
			markupPerKm = weightOfBox * markupPerKg;
			totalMarkup = distance * markupPerKm;
			
		}
		
		
		double totalPrice = (price * distance) + totalMarkup;

		
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << "The delivery of your shipment with weight of " << weightOfBox; 
		cout.setf(ios::fixed);
		cout.precision(2);
		cout<< " kg. would cost " << totalPrice << " lv." << endl;
	}


