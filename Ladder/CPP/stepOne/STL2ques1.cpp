/**
 * 
 * sort an character array according to integer array
 * 		array -> [3, 2, 1]
 *  chararray -> ['E', 'F', 'K']
 * 
 * 		output => ['K', 'F', 'E']
 * 
 * */

#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

class Solution{
public:
	void bruteForce(int arr[], char charr[], int arrSize, int charrSize){
		char temp[charrSize];
		int pos = 0;
		for(char &ch : temp){	
			ch = charr[pos]; pos++;
		}
		for(int pos = 0; pos < charrSize; pos++){
			charr[pos] = temp[arr[pos] - 1];
		}
	}

	void STLCode(int arr[], char charr[], int n){
		pair<int, char> ps[n];

		for(int pos = 0; pos < n; pos++)	ps[pos] = {arr[pos], charr[pos]};
		sort(ps, ps+n);
		for(int pos = 0; pos < n; pos++){
			charr[pos] = ps[pos].second;
		}

	}
};


int main(){
	int arr[] {3,2,1};
	char charr[] {'E', 'F', 'K'};
	Solution s;
	// s.bruteForce(arr, charr, 3, 3);
	s.STLCode(arr,charr,3);
	for(const char &ch: charr)	cout << ch << " ";
}