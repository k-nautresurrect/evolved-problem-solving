/**
 * 
 * josephus problem :
 * we are given n and k -> n = total number of peoples
 * 						   k = person killed in an iteration
 * 
 * for input n, k -> 7, 3
 * output -> 3 after 4 iteration
 * 
 * */

#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Solution{
public:
	int linkedList(int personNo, int kill){
		list<int> l;
		for(int pos = 0; pos < personNo; pos++)		l.push_back(pos);
		auto it = l.begin();
		while(l.size() > 1){
			for(int pos = 1; pos < kill; pos++){
				it++;
				if(it == l.end())	it = l.begin();
			}
			it = l.erase(it);
			if(it == l.end())	it = l.begin();
		}
		return *l.begin();
	}
	int bruteForce(int personNo, int kill){
		vector<int> persons;
		for(int pos = 0; pos < personNo; pos++)		persons.push_back(pos);
		auto it = persons.begin();
		while(persons.size() != 1){
			for(int pos = 1; pos < kill; pos++){
				it++;
				if(it == persons.end())		it = persons.begin();
			}
			it = persons.erase(it);
			if(it == persons.end())		it = persons.begin();
		}
		return *persons.begin();
	}
	int usingArray(int personNo, int kill) {
		int arr[personNo];
		arr[0] = -1;
		for(int pos = 1; pos < personNo; pos++)		arr[pos] = pos;

		int ptr = 0;
		int temp = personNo-1;
		int len = personNo;
		while(temp != 1){
			for(int pos = 1; pos < kill; pos++){
				if(arr[pos] != 0)	ptr++;
				if(ptr == len)	ptr = 0;
			}
			cout << "arr[ptr] : " << arr[ptr] << endl;
			arr[ptr] = 0;
			len--;
			if(ptr == len)		ptr = 0;
			temp--;
		}
		for(int pos = 0; pos < personNo; pos++){
			cout << arr[pos];
		}
		return 0;
	}
};

int main() {
	int n, k; cin >> n >> k;
	Solution s;
	// cout << s.bruteForce(n, k) << endl;
	cout << s.linkedList(n, k) << endl;
	cout << s.usingArray(n, k) << endl;
}