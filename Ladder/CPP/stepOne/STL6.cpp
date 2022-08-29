#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> dq = {2,3,4,6};
	dq.push_back(90);
	dq.push_front(10);
	for(auto it: dq){
		cout << it << " ";
	}
	cout << endl;
	cout << dq.front() << " " << dq.back();
	for(auto num: dq)	cout << num << " ";
}