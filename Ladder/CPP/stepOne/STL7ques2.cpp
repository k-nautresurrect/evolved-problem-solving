/**
 * 
 * givin an string check it for balanced paranthises "{}, (), []"
 * 		str  =  "([])"
 * 		output = true
 * 		
 * 		str2 = "((())"
 * 		output = false
 * */

#include <iostream>
#include <stack>

using namespace std;

class Solution{
public:
	bool balancedParanthesis(string str){
		/**
		 * -> maintain a stack in which
		 * 	-> first push the parenthesis if first one is closed then return false
		 * 	-> if first one is not closed then push it in the stack
		 * 		-> push open paranthesis untill a closed one is to be found
		 * 		-> if the closed parenthesis correspond to current top open parenthesis
		 * 			-> pop that open out and move on to next
		 * 		-> if not thhen return false
		 * */
		stack<char> stk;
		if(str[0] == ')' || str[0] == '}' || str[0] == ']')	return false;
		for(int pos = 0; pos < str.size(); pos++){
			if(str[pos] == '(' || str[pos] == '{' || str[pos] == '['){
				stk.push(str[pos]);
			}else{
				if(stk.empty() == false && str[pos] == ')' && stk.top() == '(')		stk.pop();
				else if(stk.empty()  == false && str[pos] == '}' && stk.top() == '{') stk.pop();
				else if(stk.empty()  == false && str[pos] == ']' && stk.top() == '[') stk.pop();
				else if(stk.empty() == true)	return true;
			}
		}
		if(stk.empty() == false)	return false;
		else return true;
	}
	bool match(char compChar1, char compChar2){
		return ((compChar1 == '(' && compChar2 == ')')||
				(compChar1 == '{' && compChar2 == '}')||
				(compChar1 == '[' && compChar2 == ']')
			);
	}
	bool qualityParanthesis(string str){
		stack<char> stk;
		if(str[0] == ')' || str[0] == '}' || str[0] == ']')	return false;

		for(int pos = 0; pos < str.size(); pos++){
			if(str[pos] == '(' || str[pos] == '{' || str[pos] == '['){
				stk.push(str[pos]);
			} else {
				if(stk.empty() == true)		return false;
				else if(match(stk.top(), str[pos]) == false)	return false;
				else	stk.pop();
			}
		}
	}
};

int main(){
	string str = "{}[()]";
	Solution s;
	cout << s.balancedParanthesis(str);
}