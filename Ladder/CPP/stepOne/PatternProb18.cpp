/**
 * 
 * for n(5) print as follows
 * 		E
 * 		D E
 * 		C D E
 * 		B C D E
 * 		A B C D E
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 1;

	for(int row = 0; row < rows; row++){
		char val = 'A' + (rows - row) - 1;
		for(int col = 0; col < cols; col++){
			cout << val++ << " ";
		}

		cols++;
		cout << endl;
	}

}