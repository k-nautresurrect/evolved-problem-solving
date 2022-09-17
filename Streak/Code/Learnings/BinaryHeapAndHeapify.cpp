#include <iostream>

using namespace std;

class MaxHeap {
public:
	void buildHeap(int arr[], int size){
		int treeHeight = size/2;
		for(int levels = treeHeight; levels >= 0; levels--){
			heapify(arr, levels, size);
		}
	}

	void heapify(int arr[], int levels, int size){
		int leftNode = (2 * levels) + 1;
		int rightNode = (2 * levels) + 2;

		int rootToBeMax = levels;
		if(leftNode < size and arr[leftNode] > arr[rootToBeMax])
			rootToBeMax = leftNode;
		if(rightNode < size and arr[rightNode] > arr[rootToBeMax])
			rootToBeMax = rightNode;
		if(rootToBeMax != levels){
			swap(arr[rootToBeMax], arr[levels]);
			heapify(arr, rootToBeMax, size);
		}
	}

	// write good printHeap function
};

int main() {
	int arr[]{20,1,23,89,90,34,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	MaxHeap max;
	max.buildHeap(arr,n);
	for(int num: arr)	cout << num << " ";
	cout << endl;
}