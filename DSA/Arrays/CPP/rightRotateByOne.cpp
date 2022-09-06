#include <iostream>

using namespace std;

class Solution {
public:
	void bruteForce(int arr[], int n){
		int temp = arr[n-1];
		rightShift(arr, 0, n-1);
		arr[0] = temp;
	}

	void rightShift(int arr[], int start, int end){
		for(int pos = end-1; pos >= start; pos--){
			arr[pos+1] = arr[pos];
		}
	}
};

int main() {
	int arr[]{34, 78, 65, 32, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	solve.bruteForce(arr, n);
	for(int val: arr) cout << val << " ";
	cout << endl;
}