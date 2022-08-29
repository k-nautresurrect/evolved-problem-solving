/**
 *
 * for n(5) print as follows
 * 		* * * * * * * * * *
 * 		* * * *     * * * *
 * 		* * *         * * *
 *      * *             * *
 *      *                 *
 *      * *             * *
 *      * * *         * * *
 *      * * * *     * * * *
 *      * * * * * * * * * *
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = 2 * n - 1;
	int cols = 5;
	int spaces = 0;

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++)					cout << "* ";
		for (int space = 0; space < spaces; space++)			cout << "  ";
		for (int col = 0; col < cols; col++)					cout << "* ";

		(row < n - 1) ? cols-- : cols++;
		(row < n - 1) ? spaces += 2 : spaces -= 2;
		cout << endl;
	}
}