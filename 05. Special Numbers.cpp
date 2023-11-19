#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i1 = 1; i1 <= 9; i1++) {
		if (n % i1 != 0) {
			continue;
		}

		for (int i2 = 1; i2 <= 9; i2++) {
			if (n % i2 != 0) {
				continue;

			}
			for (int i3 = 1; i3 <= 9; i3++) {
				if (n % i3 != 0) {
					continue;

				}
				for (int i4 = 1; i4 <= 9; i4++) {
					if (n % i4 != 0) {
						continue;
					}
					cout << i1 << i2 << i3 << i4 << " ";
				}
			}
		}
	}


}


