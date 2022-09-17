#include <iostream>

using namespace std;

class Solution {
public:
	void Optimize(int arr[], int n){
		int zeroWindow, oneWindow, twoWindow;
		zeroWindow = 0; oneWindow = 0; twoWindow = n-1;
		while(oneWindow < twoWindow){
			if(arr[oneWindow] == 0){
				swap(arr[zeroWindow], arr[oneWindow]);
				oneWindow += 1;
				zeroWindow += 1;
			}else if(arr[oneWindow] == 1){
				oneWindow += 1;
			}else if(arr[oneWindow] == 2){
				swap(arr[oneWindow], arr[twoWindow]);
				twoWindow -= 1;
			}
		}
	}
};

int main() {
	int arr[]{1,1,0,1,2,0,1,0,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	solve.Optimize(arr,n);
	for(int num: arr)	cout << num << " ";
}