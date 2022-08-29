/**
 * 
 * given an array of element and an element k return the list of 
 * all the smaller element
 * 
 * 		arr[] = {8, 100, 20, 40, 3, 7}
 * 		k = 10
 * 		output -> {8, 3, 7}
 * */
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	int * MinEl(int arr[], int n, int key){
		int *minArr = new int[n];
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] <= key)	minArr[pos] = arr[pos];
		}
		return minArr;
	}
	vector<int> minEl(int arr[], int n, int key){
		vector<int> minEl;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] <= key) minEl.push_back(arr[pos]);
		}
		return minEl;
	}
};


int main() {
	int arr[] {8, 100, 20, 40, 3, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 8;
	Solution s;
	int *res = s.MinEl(arr, n, key);
	vector<int> ress = s.minEl(arr, n, key);
	for(int pos = 0; pos < n; pos++){
		cout << res[pos] << " ";
	}
	cout << endl;
	for(int &val : ress){
		cout << val << " ";
	}
}