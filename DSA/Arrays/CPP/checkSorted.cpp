#include <iostream>

using namespace std;

class Solution {
public:
	bool bruteForce(int arr[], int n){
		for(int pos = 1; pos < n; pos++){
			if(arr[pos-1] > arr[pos])
				return false;
		}
		return true;
	}
};

int main() {
	int arr[]{0, 1, 12, 4, 19, 23};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	cout << solve.bruteForce(arr, n) << endl;
}

/**
 * 
 * algorithm
 * 
 * we have to check each element if the element is smaller than the 
 * previous element we need to return false, also after traversing 
 * the whole array we will be sure that the whole array is sorted
 * so return true
 * 
 * 0. for(pos in arr: 1 -> n)
 * 1. 	if(arr[pos-1] > arr[pos])
 * 2. 		return false
 * 3. return true
 * 
 * */