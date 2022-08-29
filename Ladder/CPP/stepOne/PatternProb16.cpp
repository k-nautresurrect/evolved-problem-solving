/**
 * 
 * for n(5) print as follows
 * 		A
 * 		B B
 * 		C C C
 * 		D D D D
 * 		E E E E E
 * 
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 1;

	for(int row = 0; row < rows; row++){
		char val = 'A' + row;
		for(int col = 0; col < cols; col++){
			cout << val << " ";
		}

		cols++;
		cout << endl;
	}
}