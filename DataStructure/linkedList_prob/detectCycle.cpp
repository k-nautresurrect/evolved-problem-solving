#include <iostream>

using namespace std;

class node {
public:
	int data;
	node *next;
};

/*
void traverse(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
*/

bool detectLoop(node *head){
	node *slow = head;
	node *fast = head;
	while(slow != NULL && fast->next != NULL && fast != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)	return true;
	}
	return false;
}

int main() {
	node *head = new node;
	node *prev = new node;
	head->data = 10;
	head->next = prev;
	prev->data = 20;
	
	for(int nodes = 1; nodes <= 4; nodes++){
		node *temp = new node;
		temp->data = 10*nodes;
		prev->next = temp;
		temp->next = NULL;
		prev = prev->next;
	}

	node *cycle = new node;
	prev->next = cycle;
	cycle->data = 90;
	cycle->next = head->next->next;

	cout << detectLoop(head);
	// traverse(head);
}