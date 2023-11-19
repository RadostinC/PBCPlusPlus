#include <iostream>
using namespace std;
using std::cout;

int main()
{
    int n;
    cin >> n;
    int size1 = 0;
    int size2 = 0;
    int size3 = 0;
    int size4 = 0;
    int size5 = 0;
    
    
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (number < 200) {
           
           size1 += 1;
        }
        else if (number >= 200 && number <= 399) {
            
            size2 += 1;
        }
        else if (number >= 400 && number < 600) {
            
            size3 += 1;
        }
        else if (number > 599 && number < 800) {
            
            size4 += 1;
        }
        else if (number >= 800) {
            
            size5 += 1;
        }
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    cout <<100.0* size1/n <<"%"<< endl;
    cout << 100.0*size2/n <<"%"<< endl;
    cout << 100.0*size3/n<<"%"<< endl;
    cout << 100.0*size4/n <<"%"<< endl;
    cout << 100.0*size5/n<<"%"<< endl;
}




