/**
 * 
 * for n  print as follows
 * 		*
 * 		* *
 * 		* * *
 * 		* * * *
 *  
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = 1;

	for(int row = 0; row < rows; row++){
		for(int col = 0; col < cols; col++){
			cout << '*' << " ";
		}

		cols++;
		cout << endl;
	}
}