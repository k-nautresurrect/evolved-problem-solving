#include <iostream>

using namespace std;

class Solution{
public:
	int bruteForce(int arr[], int n){
		int profit = 0;
		int buy = arr[0];
		for(int pos = 0; pos < n; pos++){
			for(int chk = pos; chk >= 0; chk--){
				buy = min(arr[chk], buy);
			}
			if(profit < (arr[pos] - buy)){
				profit = arr[pos] - buy;
			}
		}
		return profit;
	}

	int optimize(int arr[], int n){
		int profit = 0;
		int minTillNow = arr[0];
		for(int pos = 0; pos < n; pos++){
			profit = max(profit, arr[pos] - minTillNow);
			minTillNow = min(arr[pos], minTillNow);
		}
		return profit;
	}
};

int main() {
	int arr[]{1,5,9,8,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	cout << solve.bruteForce(arr, n);
	cout << solve.optimize(arr, n);
}