/**
 * 
 * for n(5) print as follows
 * 		1
 * 		0 1
 * 		1 0 1
 * 		0 1 0 1
 * 		1 0 1 0 1
 * 
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 1;

	for(int row = 0; row < rows; row++){
		int valChk = row;
		for(int col = 1; col <= cols; col++){
			if((col + valChk)&1 == 1)	cout << 1 << " ";
			else						cout << 0 << " ";
		}

		cols++;
		cout << endl;
	}
}