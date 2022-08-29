/**
 * 
 * for number n print as follows
 * 		1
 * 		2 2
 * 		3 3 3
 * 		4 4 4 4
 * 
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 1;

	for(int row = 0; row < rows; row++){
		int val = cols;
		for(int col = 0; col < cols; col++){
			cout << val << " ";
		}

		cols++;
		cout << endl;
	}
}