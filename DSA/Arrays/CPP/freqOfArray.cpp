#include <iostream>

using namespace std;

class Solution {
public:
	void bruteForce(int arr[], int n){
		int count = 1;
		for(int pos = 1; pos < n; pos++){
			if(arr[pos-1] == arr[pos]){
				count++;
			}else{
				cout << arr[pos-1] << " " << count << endl;
				count = 1;
			}
		}
		cout << arr[n-1] << " " << count << endl;
	}
};

int main() {
	int arr[]{10, 20, 20, 25, 25, 30, 30, 30};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	solve.bruteForce(arr, n);
}