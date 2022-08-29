/**
 *
 * for n (3) print like this
 * 		*
 *		* *
 * 		* * *
 * 		* * * *
 * 		* * * * *
 * 		* * * *
 * 		* * *
 * 		* *
 * 		*
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = 2 * n + 1;
	int cols = 1;

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++)	cout << "* ";

		row < n ? cols++ : cols--;
		cout << endl;
	}
}