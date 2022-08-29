#include <iostream>

using namespace std;

// global array intialized with 0
int arr[10];
int main(){

	// initialize first element as n and then all the element is 0
	int localArr[10] = {3};
	// declaring the array in heap always initialize with default value
	int *heapArr = new int[10];
	string *strArr = new string[10];
	string str = "new char array"; // mutable string
	for(int pos = 0; pos < 10; pos++){
		cout << arr[pos] << " ";
	}
	cout << endl;
	for(int pos = 0; pos < 10; pos++){
		cout << localArr[pos] << " ";
	}
	cout << endl;
	for(int pos = 0; pos < 10; pos++){
		cout << heapArr[pos] << " ";
	}
	cout << endl;
	for(int pos = 0; pos < 10; pos++){
		cout << strArr[pos] << " "; // NULL
	}
	cout << endl;
	for(int pos = 0; pos < str.size(); pos++){
		str[pos] = 'k';
		cout << str[pos] << " ";
	}

	return 0;
}