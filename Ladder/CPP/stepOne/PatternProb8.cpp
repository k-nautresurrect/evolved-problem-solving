/**
 * 
 * for any value n print like this
 *         * * * * * * * * *
 * 			 * * * * * * *
 * 			   * * * * *
 * 				 * * *
 * 			       *
 * 
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 2*n - 1;

	for(int row = 0; row < rows; row++){
		int spaces = 2*row;
		for(int space = 0; space < spaces; space++){
			cout << " ";
		}
		for(int col = 0; col < cols; col++){
			cout << "* ";
		}
		
		cols -= 2;
		cout << endl;
	}
}