#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec({1,2,3,4,5});
	for(int num: vec){
		cout << num << " ";
	}
}