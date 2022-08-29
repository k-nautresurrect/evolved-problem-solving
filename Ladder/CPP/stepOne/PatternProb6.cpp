/**
 * 
 * for n print as follows
 * 		1 2 3 4 5
 * 		1 2 3 4
 * 		1 2 3
 * 		1 2 
 * 		1
 * 
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = n;

	for(int row = 0; row < rows; row++){
		int val = 0;
		for(int col = 0; col < cols; col++){
			cout << ++val << " ";
		}

		cols--;
		cout << endl;
	}
}