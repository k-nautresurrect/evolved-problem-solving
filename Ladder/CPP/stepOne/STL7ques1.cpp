/**
 * given an string reverse it using stack
 * 		str -> "geeks"
 * 		output -> "skeeg"
 * 
 * */

#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	string reverseBrute(string str){
		string ans;
		for(auto pos = str.rbegin(); pos != str.rend(); pos++){
			ans += (char)(*pos);
		}
		return ans;
	}
	string reverse(string str){
		stack<char> stk;
		string ans;
		for(auto pos = str.begin(); pos != str.end(); pos++){
			stk.push(*pos);
		}
		while(stk.empty() == false){
			ans += stk.top();
			stk.pop();
		}
		return ans;
	}
};

int main() {
	string str = "geeks";
	Solution s;
	cout << s.reverse(str) << endl;
	cout << s.reverseBrute(str) << endl;
}