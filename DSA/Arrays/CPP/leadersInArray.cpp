#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
	vector<int> bruteForce(int arr[], int n){
		vector<int> res;
		res.push_back(arr[n-1]);
		for(int pos = n-2; pos >= 0; pos--){
			int RightMax = checkMax(arr, pos, n);
			if(RightMax <= arr[pos]){
				res.push_back(arr[pos]);
			}
		}
		reverse(res.begin(), res.end());
		return res;
	}

	vector<int> optimize1(int arr[], int n){
		vector<int> res;
		int currMax = 0;
		res.push_back(arr[n-1]);
		for(int pos = n-2; pos >= 0; pos--){
			if(arr[pos] >= currMax){
				res.push_back(arr[pos]);
				currMax = arr[pos];
			}
		}
		reverse(res.begin(), res.end());
		return res;
	}

	int checkMax(int arr[], int start, int end){
		int max = start;
		while(start < end){
			if(arr[max] < arr[start])	max = start;
			start++;
		}
		return arr[max];
	}
};

int main () {
	int arr[]{7, 10, 4, 3, 6, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution s;
	// vector<int> ans = s.bruteForce(arr, n);
	vector<int> ans = s.optimize1(arr, n);

	for(int val: ans)	cout << val << " ";
	cout << endl;
}