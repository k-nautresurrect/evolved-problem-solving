/**
 *
 * for n(4) print as follows
 *
 * 		4 4 4 4 4 4 4
 *		4 3 3 3 3 3 4
 * 		4 3 2 2 2 3 4
 * 		4 3 2 1 2 3 4
 * 		4 3 2 2 2 3 4
 * 		4 3 3 3 3 3 4
 * 		4 4 4 4 4 4 4
 *
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = rows;

	for (int row = 0; row < rows; row++) {
		int val = n;
		int count = (2 * n - 1) - (row + 1);
		val++;
		while (val != n) {
			if (count != 0) {
				cout << val;
			} else {
				val--;
			}
			count--;
		}
		// if (row == 0 || row == rows) {
		// 	val = n;
		// 	for (int col = 0; col < 2 * cols - 2; col++)	cout << val;
		// }
		cout << endl;
	}
}