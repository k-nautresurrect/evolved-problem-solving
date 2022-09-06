#include <iostream>

using namespace std;

class Solution {
public:
	void bruteForce(int arr[], int n){
		int lpos = 0;
		int rpos = n-1;
		while(lpos <= rpos){
			swap(arr[lpos], arr[rpos]);
			lpos++; rpos--;
		}
	}
};

int main() {
	int arr[]{1,2,3,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	Solution solve;
	solve.bruteForce(arr, n);
	for(int &val: arr){
		cout << val << " ";
	}
	cout << endl;
}


/**
 * 
 * algorithm
 * start from the ver first element and swap it with the very last element
 * once swapped repeat things untill we reach to the mid element
 * 
 * 0. lpos = 0, rpos = n-1
 * 1. while(lpos <= rpos)
 * 2. 	swap(arr[lpos], arr[rpos])
 * 3.	lpos <- lpos + 1, rpos <- rpos - 1
 * 
 * */