#include <iostream>

using namespace std;

class Solution{
public:
	int bruteForce(int arr[], int n){
		int maxIdx = 0;
		int max2Idx = 0;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[maxIdx])
				maxIdx = pos;
		}
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[max2Idx] && pos != maxIdx)
				max2Idx = pos;
		}
		return max2Idx;
	}
	int optimized(int arr[], int n){
		int maxIdx = 0; int max2Idx = -1;
		for(int pos = 0; pos < n; pos++){
			if(arr[maxIdx] < arr[pos]){
				max2Idx = maxIdx;
				maxIdx = pos;
			} else if(arr[maxIdx] != arr[pos]){
				if(max2Idx == -1 or arr[max2Idx] < arr[pos])
					max2Idx = pos;
			}
		}
		return max2Idx;
	}
};

int main() {
	int arr[] = {-3, 0, -5, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	cout << solve.bruteForce(arr, n) << endl;
	cout << solve.optimized(arr, n) << endl;
}

/**
 * algorithm
 * 
 * first find the position in array where maximum occurs
 * then find the second maximum number and update the second max position
 * 
 * 0. maxIdx <- 0, max2Idx <- 0
 * 1. for(pos in arr: 0 -> n)
 * 2.	if(arr[pos] > arr[maxIdx])
 * 3.		maxIdx <- arr[pos]
 * 4. for(pos in arr: 0 -> n)
 * 5.	if(arr[pos] > arr[max2Idx] && pos != maxIdx)
 * 6.		max2Idx <- arr[pos]
 * 7. return max2Idx
 * 
 * optimize (in one pass)
 * 
 * we have to keep track of the previous maximum whenever we find another
 * maximum element assign the previous maximum to current max 
 * and current max to new maximum
 * 
 * 0. maxIdx <- 0, max2Idx <- -1
 * 1. for(pos in arr: 0 -> n)
 * 2. 	if(arr[maxIdx] < arr[pos])
 * 3.		max2Idx <- maxIdx
 * 4.		maxIdx <- pos
 * 5.	else if(arr[maxIdx] != arr[pos])
 * 6.		if(max2Idx == -1 or max2Idx > arr[pos])
 * 7.			max2Idx <- pos
 * 8. return max2Idx
 * 
 * */