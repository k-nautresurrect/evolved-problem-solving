#include <iostream>

using namespace std;

int main() {
	// looping conditions
	/**
	 * 1-> initialization
	 * 2-> updation
	 * 3-> stoppage
	 * */

	int init = 0; // initialization
	while(init <= 10){ // stoppage
		cout << init << " ";
		init++; // updation 
	}
	cout << "\n";
	for(int init = 0; init <= 10; init++){
		cout << init << " ";
	}
	cout << "\n";
	// for each loop in c++ on array or any iterables
	int arr[10] {0};
	// only reading
	for(const int &num : arr){
		cout << num << " ";
	}
	// for writting elment
	for(int &num: arr){
		cin >> num;
	}

	return 0;
}