#include <iostream>

using namespace std;

class node {
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

int length(node *head){
	int length = 0;
	while(head != NULL){
		length++;
		head = head->next;
	}
	return length;
}

int findMid(node *head){
	int len = length(head);
	int mid = len/2;
	while(mid != 0){
		head = head->next;
		mid--;
	}
	return head->data;
}

int main(){
	node *head = new node;
	node *prev = new node;
	head->data = 10;
	prev->data = 20;
	head->next = prev;
	for(int nodes = 3; nodes <= 4; nodes++){
		node *current = new node;
		current->data = 10*nodes;
		prev->next = current;
		current->next = NULL;
		prev = prev->next;
	}
	cout << findMid(head) << endl;
	traverse(head);
}