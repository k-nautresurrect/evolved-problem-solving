/**
 * 
 * for n(4) print as follows
 * 		1             1
 * 		1 2         2 1
 * 		1 2 3     3 2 1
 * 		1 2 3 4 4 3 2 1
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 1;
	int spaces = 2*n-2;

	for(int row = 0; row < rows; row++){
		int val = 0;
		for(int col = 0; col < cols; col++){
			cout << ++val << " ";
		}
		for(int space = 0; space < spaces; space++){
			cout << "  ";
		}
		val += 1;
		for(int col = 0; col < cols; col++){
			cout << --val << " ";
		}

		cols++;
		spaces -= 2;
		cout << endl;
	}
}