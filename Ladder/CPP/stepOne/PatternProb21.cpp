/**
 *
 * for n(5) print as follows
 * 		* * * *
 * 		*     *
 * 		*     *
 * 		*     *
 * 		* * * *
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;

	int rows = n;
	int cols = n - 1;
	int spaces = 0;

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			cout << "* ";
		}
		for (int space = 0; space < spaces; space++) {
			cout << " ";
		}
		if (row < n - 1 and row != 0) {
			for (int col = 0; col < cols; col++) {
				cout << "* ";
			}
		}

		(row == n - 2) ? cols = n - 1 : cols = 1;
		(row == n - 1) ? spaces = 0 : spaces = n - 1;
		cout << endl;

	}
}