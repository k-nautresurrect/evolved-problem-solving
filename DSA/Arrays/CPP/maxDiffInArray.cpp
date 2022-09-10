#include <iostream>
#include <climits>

using namespace std;

class Solution {
public:
	int maxDifference(int arr[], int n){
		int maxDiff = INT_MIN;
		for(int pos = 0; pos < n; pos++){
			for(int chk = pos+1; chk < n; chk++){
				maxDiff = max(arr[chk] - arr[pos], maxDiff);
			}
		}
		return maxDiff;
	}

	int optimize1(int arr[], int n){
		int chk = -1;
		int maxIdx = 0;
		int minIdx = 0;
		for(int pos = 0; pos < n; pos++){
			if(arr[maxIdx] < arr[pos]){
				maxIdx = pos;
			}
		}
		for(int pos = 0; pos < n; pos++){
			if(arr[minIdx] >= arr[pos] and pos < maxIdx){
				minIdx = pos;
			}
		}
		return arr[maxIdx] - arr[minIdx];
	}

	int optimize2(int arr[], int n){
		int minVal = arr[0];
		int maxDiff = 0;
		for(int pos = 0; pos < n; pos++){
			maxDiff = max(maxDiff, arr[pos] - minVal);
			minVal = min(minVal, arr[pos]);
		}
		return maxDiff;
	}
};

int main() {
	int arr[]{34, 8, 10, 3, 2, 80, 30, 33, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	cout << solve.maxDifference(arr, n) << endl;
	cout << solve.optimize1(arr, n) << endl;
	cout << solve.optimize2(arr, n) << endl;
}