/**
 * 
 * for n print pattern as
 * 		* * * * *
 * 		* * * * *
 * 		* * * * *
 * 		* * * * *
 * 		* * * * *
 * 
 * */

#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int rows = n;
	int cols = n;

	for(int row = 0; row < rows; row++){
		for(int col = 0; col < cols; col++){
			cout << '*' << " ";
		}
		cout << endl;
	}
}