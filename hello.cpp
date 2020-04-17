#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			cout << j << " * " << i << " = " << setw(3) << i * j;
		}
		cout << endl;
	}

	return 0;
}