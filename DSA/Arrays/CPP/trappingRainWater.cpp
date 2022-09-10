#include <iostream>

using namespace std;

class Solution {
public:
	int bruteForce(int arr[], int n){
		int waterStore = 0;
		for(int pos = 1; pos < n-1; pos++){
			int water = 0;
			int maxHeightL = arr[pos];
			int maxHeightR = arr[pos];
			for(int chk = 0; chk < pos; chk++){
				if(maxHeightL < arr[chk])
					maxHeightL = arr[chk];
			}
			for(int chk = pos + 1; chk < n; chk++){
				if(maxHeightR < arr[chk])
					maxHeightR = arr[chk];
			}
			water = min(maxHeightR, maxHeightL)  - arr[pos];
			waterStore += water;
		}
		return waterStore;
	}

	int optimize1(int arr[], int n){
		int waterStore = 0;
		int Lmax
	}
};

int main() {
	int arr[]{3,0,6,2,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	cout << solve.bruteForce(arr, n);
}