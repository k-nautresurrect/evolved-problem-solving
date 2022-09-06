#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node *next;
};

int main() {
	Node *head = new Node;
	Node *prev = new Node;
	head->data = 0;
	prev->data = 87;
	head->next = prev;

	for(int i = 1; i < 5; i++){
		int data; cin >> data;
		Node *temp = new Node;
		temp->data = data;
		temp->next = NULL;
		prev->next = temp;
		prev = prev->next;
	}
}