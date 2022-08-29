#include <iostream>

using namespace std;

template <typename dataType>
bool comp(dataType a, dataType b){
	return a>b?true:false;
}

template <typename dataType1, typename dataType2>
class Pair{
private:
	dataType1 f;
	dataType2 s;
public:
	Pair(dataType1 first, dataType2 second){
		this->f = first;
		this->s = second;
	}
	dataType1 first(){
		return this->f;
	}
	dataType2 second(){
		return this->s;
	}
};

int main() {
	int a = 10; int b = 20;
	Pair<int, int> ps(30, 24);
	cout << ps.first() << " " << ps.second() << endl;
	cout << comp(a,b) << endl;
}