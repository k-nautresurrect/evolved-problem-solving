#include <iostream>

using namespace std;

class node{
public:
	int data;
	node *next;
};

void traverse(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}	
	cout << endl;
}

int findMid(node *head){
	node *fast = head;
	node *slow = head;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->data;
}

int main() {
	node *head = new node;
	node *prev = new node;
	head->data = 10;
	prev->data = 20;
	head->next = prev;

	for(int nodes = 3; nodes <= 5; nodes++){
		node *current = new node;
		current->data = 10*nodes;
		prev->next = current;
		current->next = NULL;
		prev = prev->next;
	}

	traverse(head);
	cout << findMid(head);
}