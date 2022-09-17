#include <iostream>
#include <algorithm>	// for reverse()

using namespace std;

class Solution {
public:
	void Reverse(int arr[], int n){
		int rev[n];
		int chk = 0;
		for(int pos = n-1; pos >= 0; pos--){
			rev[chk] = arr[pos];
			chk++;
		}
		for(int pos = 0; pos < n; pos++)	arr[pos] = rev[pos];
	}

	void Optimize(int arr[], int n){
		int front = 0;
		int last = n-1;
		while(front <= last){
			swap(arr[front], arr[last]);
			front++; last--;
		}
	}

	void inbuiltFunctions(int arr[], int n){
		reverse(arr, arr+n);
	}
};

int main() {
	int arr[]{1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	solve.Optimize(arr, n);
	solve.inbuiltFunctions(arr, n);
	for(int num : arr)	cout << num << " ";
	cout << endl;
}