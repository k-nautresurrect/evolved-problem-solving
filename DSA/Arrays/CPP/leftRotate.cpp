#include <iostream>

using namespace std;

class Solution {
public:
	void bruteForce(int arr[], int n, int times) {
		while (times-- != 0) {
			int temp = arr[0];
			leftShift(arr, 0, n);
			arr[n - 1] = temp;
		}
	}

	void optimize1(int arr[], int n, int times) {
		int rotate_idx = times % n;
		int temp[n];
		for (int pos = 0; pos < n; pos++) {
			temp[pos] = arr[rotate_idx % n];
			rotate_idx++;
		}
		for (int pos = 0; pos < n; pos++) {
			arr[pos] = temp[pos];
		}
	}

	void optimize2(int arr[], int n, int times) {
		reverse(arr, 0, (times % n) - 1);
		reverse(arr, (times % n), n - 1);
		reverse(arr, 0, n - 1);
	}

	void reverse(int arr[], int start, int end) {
		while (start <= end) {
			swap(arr[start], arr[end]);
			start++; end--;
		}
	}

	void leftShift(int arr[], int start, int end) {
		for (int pos = start + 1; pos < end; pos++) {
			arr[pos - 1] = arr[pos];
		}
	}
};

int main() {
	int arr[] {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	Solution solve;
	// solve.bruteForce(arr, n, 10);
	solve.optimize2(arr, n, 10);
	for (int val : arr) cout << val << " ";
}