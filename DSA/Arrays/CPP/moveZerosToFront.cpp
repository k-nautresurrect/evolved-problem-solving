#include <iostream>

using namespace std;

class Solution{
public:
	void bruteForce(int arr[], int n){
		for(int pos = n-1; pos >= 0; pos--){
			if(arr[pos] == 0){
				int chk = pos;
				while(arr[chk] == 0 and chk > 1){
					chk--;
				}
				swap(arr[pos], arr[chk]);
			}
		}
	}

	void optimize(int arr[], int n){
		int start = n;
		int end = n-1;
		while(end >= 0){
			if(arr[end] != 0){
				swap(arr[start-1], arr[end]);
				start--;
			}
			end--;
		}
	}
};

int main(){
	int arr[]{0, 11, 0, 0, 0, 3, 4, 0, 9, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	// solve.bruteForce(arr, n);
	solve.optimize(arr, n);
	for(int val: arr) cout << val << " ";
}