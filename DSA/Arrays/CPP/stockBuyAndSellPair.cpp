#include <iostream>
#include <vector>
#include <utility>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<int> makeMinima(int arr[], int n) {
		vector<int> minima;
		if (arr[0] <= arr[1]) {
			minima.push_back(0);
		}
		for (int pos = 1; pos < n-1; pos++) {
			if (arr[pos] <= arr[pos+1] && arr[pos] < arr[pos-1]) {
				minima.push_back(pos);
			}
		}
		return minima;
	}

	vector<int> makeMaxima(int arr[], int n){
		vector<int> maxima;
		for(int pos = 1; pos < n; pos++){
			if(arr[pos] > arr[pos-1] and arr[pos] >= arr[pos+1]){
				maxima.push_back(pos);
			}
		}
		if(arr[n-1] >= arr[n-2]){
			maxima.push_back(arr[n-1]);
		}
		return maxima;
	}

	vector<pair<int, int>> bruteForce(int arr[], int n) {
		vector<pair<int, int>> stockPairs;
		vector<int> minima;
		vector<int> maxima;
		minima = makeMinima(arr, n);
		maxima = makeMaxima(arr, n);
		for(int pos = 0; pos < minima.size(); pos++){
			stockPairs.push_back(make_pair(minima[pos], maxima[pos]));
		}
		return stockPairs;
	}
};

int main() {
	int arr[] {1, 2, 6, 4, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	Solution solve;
	vector<pair<int,int>> ans;
	ans = solve.bruteForce(arr, n);
	for(auto vec: ans){
		cout << vec.first << " " << vec.second << " ";
		cout << endl;
	}
}

/**
 * algorithm
 *
 * keep track of all the minima and maxima in the array
 *
 *
 *
 *
 *
 * */