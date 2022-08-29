/**
 * 
 * for n print as follows
 * 			*
 * 		  * * *
 *      * * * * *
 *    * * * * * * *
 * 
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 1;
	int spaces = n;

	for(int row = 0; row < rows; row++){

		for (int space = 0; space < 2*spaces; space++){
			cout << " ";
		}
		for(int col = 0; col < cols; col++){
			cout << "*" << " ";
		}

		cols += 2;
		spaces -= 1;
		cout << endl;
	}
}