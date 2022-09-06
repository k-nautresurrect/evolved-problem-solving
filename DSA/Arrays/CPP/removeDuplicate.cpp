#include <iostream>

using namespace std;

class Solution {
public:
	int bruteForce(int arr[], int n){
		int ans[n]{0};
		int ansIdx = 1;
		ans[0] = arr[0];
		for(int pos = 1; pos < n; pos++){
			if(arr[pos-1] != arr[pos]){
				ans[ansIdx] = arr[pos];
				ansIdx++;
			}
		}
		for(int pos = 0; pos < n; pos++)
			arr[pos] = ans[pos];
		return ansIdx;
	}
	int optimize(int arr[], int n){
		int start = 0;
		int end = 0;
		int newIdx = 0;
		while(end < n){
			if(arr[start] != arr[end]){
				arr[start+1] = arr[end];
				start++;
				newIdx++;
			}
			end++;
		}
		return newIdx+1;
	}
};

int main() {
	int arr[]{10, 20, 20, 20, 30, 30, 30, 30};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	// solve.bruteForce(arr, n);
	cout << solve.optimize(arr, n);
	cout << endl;
	for(int &val: arr)	cout << val << " ";
}


/**
 * 
 * algorithm
 * 
 * we will take an auxilary array and fill it with the unique elements only
 * first we fill the 0th index with arr[0] element than we fill the rest
 * of the array according to the comparision of adjacent positions
 * 
 * 0. int[n] <- ans, ansIdx <- 1, ans[0] <- arr[0]
 * 1. for(pos in arr: 1 -> n)
 * 2. 	if(arr[pos] != arr[pos-1])
 * 3.		ans[pos] <- arr[pos]
 * 4.		ansIdx <- ansIdx + 1
 * 5. for(pos in ans: 0 -> n)
 * 6.	ans[pos] <- arr[pos]
 * 7. return ansIdx
 * 
 * 
 * we have to check the adjacent element, if it is equal we need to 
 * conserve the starting position of the element and ending position
 * to replace the (starting+1)th position with further non equal element.
 * */