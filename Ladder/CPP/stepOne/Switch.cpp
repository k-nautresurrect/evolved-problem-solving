#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;

	// only works for one time.
	switch(n + 4){
		case '1':
			// do work
			break;
		case '2':
			// do work when expression is 2
			break;
		default:
			// do work when there is nothing matching
			cout << "nothing is done" << endl;
			break;
	}
	return 0;
}