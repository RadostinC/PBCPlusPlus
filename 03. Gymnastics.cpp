#include <iostream>
using namespace std;


int main()
{
    string nationality;
    cin >> nationality;
    string instrument;
    cin >> instrument;

    double hardPoints = 0.0;
    double performance = 0.0;
    double totalPoints = 0.0;

    if (nationality == "Russia") {
        if (instrument == "ribbon") {
            performance = 9.400;
            hardPoints = 9.100;

        }
        else if (instrument == "hoop") {
            performance = 9.800;
            hardPoints = 9.300;

        }
        else if (instrument == "rope") {
            performance = 9.000;
            hardPoints = 9.300;
        }
    }
    else if (nationality == "Bulgaria") {
        if (instrument == "ribbon") {
            hardPoints = 9.600;
            performance = 9.400;

        }
        else if (instrument == "hoop") {
            hardPoints = 9.550;
            performance = 9.750;
        }
        else if (instrument == "rope") {
            hardPoints = 9.500;
            performance = 9.400;
        }
    }
    else if (nationality == "Italy") {
        if (instrument == "ribbon") {
            hardPoints = 9.200;
            performance = 9.500;
        }
        else if (instrument == "hoop") {
            hardPoints = 9.450;
            performance = 9.350;
        }
        else if (instrument == "rope") {
            hardPoints = 9.700;
            performance = 9.150;
        }
    }
    totalPoints = performance + hardPoints;
    double neededpoints = 20 - totalPoints;
    double percent = (neededpoints / 20) * 100;
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << "The team of " << nationality << " get " << totalPoints << " on " << instrument << "." << endl;
    cout.precision(2);

    
    cout << percent << "%" << endl;
}
