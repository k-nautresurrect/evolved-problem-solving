#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> bruteForce(int arr[], int n){
		vector<int> ans(2);
		int max = 0; int min = 0;
		for(int pos = 0; pos < n; pos++){
			for(int chk = 0; chk < n; chk++){
				if(arr[pos] > arr[max] and pos != chk){
					max = pos;
				}
			}
		}
		for(int pos = 0; pos < n; pos++){
			for(int chk = 0; chk < n; chk++){
				if(arr[pos] < arr[min] and pos != min){
					min = pos;
				}
			}
		}
		ans[0] = arr[max]; ans[1] = arr[min];
		return ans;
	}

	vector<int> Optimize(int arr[], int n){
		vector<int> ans(2);
		int max = 0; int min = 0;
		for(int pos = 0; pos < n; pos++){
			if(arr[pos] > arr[max]){
				max = pos;
			}
			if(arr[pos] < arr[min]){
				min = pos;
			}
		}
		ans[0] = arr[max]; ans[1] = arr[min];
		return ans;
	}
};

int main() {
	int arr[]{1,2,3,4,5,-6,-8};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	vector<int> sol = solve.Optimize(arr, n);
	for(int num: sol){
		cout << num << " ";
	}
}