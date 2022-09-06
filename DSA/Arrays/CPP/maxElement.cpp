#include <iostream>
#include <climits>

using namespace std;

class Solution{
public:
	int bruteForce(int arr[], int n){
		int max = 0;
		for(int pos = 0; pos < n; pos++){
			for(int chk = 0; chk < n; chk++){
				if(arr[pos] > arr[chk])
					max = arr[pos];
			}
		}
		return max;
	}

	int optimized(int arr[], int n){
		int max = INT_MIN;
		for(int pos = 0; pos < n; pos++){
			if(max < arr[pos])
				max = arr[pos];
		}
		return max;
	}
};

int main() {
	int arr[] = { -3, 0, -5, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	cout << solve.bruteForce(arr, n) << endl;
	cout << solve.optimized(arr, n) << endl;
}

/**
 * alorithm : 
 * 
 * Brute Force - 
 * we have to check each element with every element 
 * and find the maximum among them.
 * 
 * 0. max <- 0
 * 1. for(pos in arr: 0 -> n)
 * 2. 	for(chk in arr: 0 -> n)
 * 3.		if(arr.at(pos) > arr.at(chk))
 * 4. 			max <- arr.at(pos)
 * 5. return max
 * 
 * Optimized - 
 * at the moment of traversing keep track of current maximum 
 * till now, here untill end the current maximum is the required max
 * 
 * 0. max <- 0
 * 1. for(pos in arr: 0 -> n)
 * 2. 	if(max < arr[pos])
 * 3.		max = arr[pos]
 * 4. return max
 * 
 * */