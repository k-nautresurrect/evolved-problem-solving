#include <iostream>
#include <forward_list>
#include <iterator>
#include <utility>

using namespace std;

int main() {
	// not ofentl used
	forward_list<int> ls, ls2;
	ls.assign({1,2,3,4,5,6,7});
	ls.push_front(30);
	ls.push_front(56);
	ls2.assign(ls.begin(), ls.end());
	// Other operations can be performed using iterators
	// auto it = ls2.end(); end not works for -- iterators
	auto it = ls2.begin();
	it = ls2.emplace_after(it, 10);
	for(auto pos = ls2.begin(); pos != ls2.end(); pos++){
		cout << *pos << " ";
	}
}