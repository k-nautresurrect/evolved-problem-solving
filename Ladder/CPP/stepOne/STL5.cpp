#include <iostream>
#include <list>

using namespace std;

int main() {
	list<int> ls;
	ls.assign({10,23,45,89});
	ls.pop_back();
	ls.pop_front();
	for(auto it: ls){
		cout << it << " ";
	}
	cout << endl;
	ls.push_front(90);
	ls.push_back(100);
	for(auto it: ls){
		cout << it << " ";
	}
	cout << ls.front() << endl;
	cout << ls.size() << endl;
}