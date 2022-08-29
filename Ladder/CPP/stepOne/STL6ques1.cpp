/**
 * 
 * maximum in all subarray of size k
 * 		arr[] -> {10, 8, 5, 12, 15, 7, 6}
 * 		k -> 3
 * 		output -> 10, 12, 15, 15, 15
 * 
 * 
 * */
#include <iostream>
#include <vector>
#include <iterator>
#include <deque>

using namespace std;

class Solution {
public:
	vector<int> bruteForce(vector<int> &arr, int k){
		vector<int> maxAns;
		for(int pos = 0; pos <= arr.size() - k; pos++){
			int maxi = arr[pos];
			for(int chk = pos; chk < k+pos; chk++){
				if(maxi < arr[chk]){
					maxi = arr[chk]; 
				}
			}
			maxAns.push_back(maxi);
		}
		return maxAns;
	}
	vector<int> optimize1(vector<int> &arr, int k){
		vector<int> maxAns;
		int maxEl = arr[0];
		for(int pos = 0; pos < k; pos++)	maxEl = max(arr[pos], maxEl);
		maxAns.push_back(maxEl);
		for(int pos = k; pos < arr.size(); pos++){
			if(arr[pos] > maxEl){	
				maxEl = arr[pos];
			}
			maxAns.push_back(maxEl);
		}
		return maxAns;
	}
	vector<int> optimize2(vector<int> &arr, int k){
		vector<int> maxAns;
		deque<int> dq;
		for(int pos = 0; pos < k; pos++){
			while(!dq.empty() && arr[pos] >= arr[dq.back()])	dq.pop_back();
			dq.push_back(pos);
		}
		for(int pos = 0; pos < arr.size(); pos++){
			maxAns.push_back(dq.front());
			while(!dq.empty() && dq.front() <= pos-k){
				dq.pop_back();
			}
			while(!dq.empty() && arr[pos] >=  arr[dq.back()]){
				dq.pop_back();
			}
			dq.push_back(pos);
		}
		maxAns.push_back(dq.front());
		return maxAns;
	}
};


int main(){
	vector<int> vec {10, 8, 5, 12, 15, 7, 6};
	int k = 3;
	Solution s;
	vector<int> sol = s.bruteForce(vec, k);
	for(auto num : sol)	cout << num << " ";
	cout << endl;
	vector<int> sol2 = s.optimize2(vec, k);
	for(auto num : sol2) cout << num << " ";
}