#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node *next; // adress next object of Node

	Node(int data){
		this->data = data;
	}
};

int main() {
	Node *head;
	head->data = 0;
	for(int i = 1; i < 5; i++){
		Node *temp;
		int data; cin >> data;
		temp->data = data;
		temp->next = NULL;
		head->next = temp;
		head = temp->next;
	}
}