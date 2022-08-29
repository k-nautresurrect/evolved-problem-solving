#include <iostream>
#include <utility>

using namespace std;

int main() {
	pair<int, int> ps(10, 30);
	cout << ps.first << " " << ps.second << endl;
	ps.first = 45; ps.second = 90;
	cout << ps.first << " " << ps.second << endl;
}