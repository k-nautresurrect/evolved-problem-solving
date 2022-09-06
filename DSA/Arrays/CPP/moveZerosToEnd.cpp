#include <iostream>

using namespace std;

class Solution{
public:
	void bruteForce(int arr[],  int n){
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] == 0){
				int chk = pos;
				while(arr[chk] == 0 && chk < n-1){
					chk++;
				}
				swap(arr[pos], arr[chk]);
			}
		}
	}

	void optimize(int arr[], int n){
		int start = -1;
		int end = 0;
		while(end < n){
			if(arr[end] != 0){
				swap(arr[start + 1], arr[end]);
				start++;
			}
			end++;
		}
	}

	void print(int arr[], int n){
		for(int i = 0; i < n; i++)	cout << arr[i] << " ";
		cout <<endl;
	}
};

int main() {
	int arr[]{0, 11, 0, 0, 0, 3, 4, 0, 9, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	// solve.bruteForce(arr,n);
	solve.optimize(arr,n);
	for(int val: arr)	cout << val << " ";
	cout << endl;
}