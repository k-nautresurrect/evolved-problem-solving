#include <iostream>
#include <vector>		// for vector
#include <algorithm>	// for sort

using namespace std;

class Solution {
public:
	// failing
	vector<int> bruteForce(int arr[], int n, int k){
		vector<int> max;
		vector<int> min;
		vector<int> ans(2);
		int temp = k;
		int maxEl = 0; int minEl = 0;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] < arr[minEl]){
				minEl = pos;
			}
			if(arr[pos] > arr[maxEl]){
				maxEl = pos;
			}
		}
		min.push_back(arr[minEl]); max.push_back(arr[maxEl]);
		while(temp != 0){
			maxEl = 0; minEl = 0;
			for(int pos = 0; pos < n; pos++){
				bool foundMin = false; bool foundMax = false;
				if(arr[pos] < arr[minEl] and pos != minEl){
					for(int chk = 0; chk < min.size(); chk++){
						if(arr[pos] == min[chk]){
							foundMin = true;
							break;
						}
					}
					if(foundMin == true){
						continue;
					}else{
						minEl = pos;
					}
				}
				if(arr[pos] > arr[maxEl] and pos != maxEl){
					for(int chk = 0; chk < max.size(); chk++){
						if(arr[pos] == max[chk]){
							foundMax = true;
							break;
						}
					}
					if(foundMax == true){
						continue;
					}else{
						maxEl = pos;
					}
				}
			}
			max.push_back(arr[maxEl]); min.push_back(arr[minEl]);
			temp--;
		}
		/*
		cout << "min : ";
		for(int num: min){
			cout << num << " ";
		}
		cout << endl;
		cout << "max : "; 
		for(int num: max){
			cout << num << " ";
		}
		cout << endl;
		*/
		ans[0] = min[min.size() - 1]; ans[1] = max[max.size() - 1];
		return ans;
	}

	vector<int> Optimize1(int arr[], int n, int k){
		vector<int> ans;
		sort(arr, arr+n);
		ans.push_back(arr[k-1]);
		ans.push_back(arr[n-k]);
		return ans;
	}

	
};

int main() {
	int arr[]{3,2,4,1,6,9,12}; // 1 2 3 4 6 9 12 
	int k = 4;
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	vector<int> res = solve.Optimize1(arr, n, k);
	for(int num : res) {
		cout << num << " ";
	}
}