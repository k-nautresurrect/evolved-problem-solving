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
};

int main() {
	int arr[]{2,3,0,6,4,8,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	cout << solve.maxDifference(arr, n) << endl;
	cout << solve.optimize1(arr, n) << endl;
}