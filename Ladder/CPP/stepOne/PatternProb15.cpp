/**
 * 
 * for n(5) print as follows
 * 		A B C D E
 * 		A B C D
 * 		A B C
 * 		A B
 * 		A
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = n;

	for(int row = 0; row < rows; row++){
		char val = 'A';
		for(int col = 0; col < cols; col++){
			cout << val++ << " ";
		}

		cols--;
		cout << endl;
	}
}