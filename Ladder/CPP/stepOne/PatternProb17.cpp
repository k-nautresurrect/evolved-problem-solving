/**
 *
 * for n(4) print as follows
 * 			  A
 *          A B A
 * 		  A B C B A
 * 		A B C D C B A
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 1;
	int spaces = n;

	for (int row = 0; row < rows; row++) {
		char val = 'A' - 1;

		for (int space = 0; space < spaces; space++) {
			cout << "  ";

		}
		for (int col = 0; col < cols; col++) {
			(col <= row) ? ++val : --val;
			cout << val << " ";
		}

		spaces -= 1;
		cols += 2;
		cout << endl;
	}
}