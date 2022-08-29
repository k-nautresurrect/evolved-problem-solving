#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *next; // adress of next object of type Node
};

void traverse(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

Node* insertInBegin(Node *head, int num) {
	Node *temp = new Node;
	temp->data = num;
	temp->next = head;
	head = temp;
	return head;
}

void insertBegin(int num, Node *&head) {
	Node *temp = new Node;
	temp->data = num;
	temp->next = head;
	head = temp;
}

Node* inserInEnd(Node *last, int num) {
	Node *temp = new Node;
	temp->data = num;
	temp->next = NULL;
	last->next = temp;
	last = temp;
	return last;
}

void insertEnd(Node *&last, int num) {
	Node *temp = new Node;
	temp->data = num;
	temp->next = NULL;
	last->next = temp;
	last = temp;
}

void refrenceInsertEnd(Node *&head, int num){
	Node *temp = new Node;
	temp->data = num;
	temp->next = NULL;

	if(head == NULL){
		head = temp;
	} else {
		Node *last = head;
		while(last->next != NULL){
			last = last->next;
		}
		last->next = temp;
		last = temp;
	}
}

Node* insertViaHead(Node *head, int num) {
	Node *temp = new Node;
	temp->data = num;
	temp->next = NULL;

	if (head == NULL) {
		head = temp;
	} else {
		while (head->next != NULL) {
			head = head->next;
		}
	}
	head->next = temp;
	head = temp;
	return head;
}

int main() {
	Node *head = new Node;
	Node *middle = new Node;
	Node *last = new Node;
	head->data = 45;
	head->next = middle;
	middle->data = 90;
	middle->next = last;
	last->data = 85;
	last->next = NULL;
	traverse(head);
	head = insertInBegin(head, 89);
	cout << endl;
	traverse(head);
	insertBegin(69, head);
	cout << endl;
	traverse(head);
	last = inserInEnd(last, 78);
	cout << endl;
	traverse(head);
	insertEnd(last, 58);
	cout << endl;
	traverse(head);
	last = insertViaHead(head, 98);
	cout << endl;
	traverse(head);
	refrenceInsertEnd(head, 54);
	cout << endl;
	traverse(head);
	cout << "last is : "<< last->data;
}