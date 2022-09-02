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
	int middle = 2*n - 3;

	// first half
	for (int row = 0; row < rows; row++) {
		int val = n;
		for(int col = 0; col <= row; col++){
			cout << val << " ";
			val--;
		}
		val++;
		for(int col = 0; col < middle; col++){
			cout << val << " ";
		}

		for(int col = 0; col <= row; col++){
			if(val != 1)	cout << val << " ";
			val++;
		}

		middle -= 2;
		cout << endl;
	}

	// second half
	middle = 1;
	for(int row = 0; row < rows-1; row++){
		int val = n;
		for(int col = 0; col < (rows-row) - 1; col++){
			cout << val << " ";
			val--;
		}
		val++;
		for(int col = 0; col < middle; col++){
			cout << val << " ";
		}
		for(int col = 0; col < (rows-row)-1; col++){
			cout << val << " ";
			val++;
		}

		middle += 2;
		cout << endl;
	}
}