#include <iostream>

using namespace std;

class Solution {
public:
	int bruteForce(int arr[], int n, int start, int end){
		if(end <= start){
			return 0; 
		}
		int profit = 0;
		for(int pos = start; pos < end; pos++){
			for(int chk = pos+1; chk >= start; chk--){
				if(arr[chk] > arr[pos]){
					int currProfit = arr[pos]-arr[chk] + bruteForce(arr, n, start, pos-1) + bruteForce(arr, n, chk+1, end);
					profit = max(currProfit, profit);
				}
			}
		}
		return profit;
	}
	int optimize(int arr[], int n){
		int profit = 0;
		for(int pos = 1; pos < n; pos++){
			if(arr[pos-1] < arr[pos])
				profit += arr[pos] - arr[pos-1];
		}
		return profit;
	}
};

int main() {
	int arr[]{1,5,3,8,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	cout << solve.bruteForce(arr, n, 0, n);
	cout << solve.optimize(arr,n);
}