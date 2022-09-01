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

void removeEl(Node *head, int num){
	Node *temp = head;
	while(head != NULL){
		if(head->next->data == num){
			temp = head->next;
			head->next = head->next->next;
			// cout << "temp : " << temp->data << endl;
			// cout << "head->next : " << head->data << endl;
			delete(temp);
			break;
		}
		head = head->next;
	}
}

bool Search(Node *head, int val){
	while(head != NULL){
		if(head->data == val)	return true;
	}
	return false;
}

int nthTerm(Node *head, int n){
	while(head != NULL && n-1 != 0){
		head = head->next;
		n--;
	}
	return (head != NULL)?head->data:-1;
}

void printReverse(Node *head){
	if(head == NULL)
		return;
	printReverse(head->next);
	cout << head->data << " ";
}

void nthFromLast(Node *head, int n){
	static int count = 0;
	if(head == NULL)
		return;
	nthFromLast(head->next, n);
	if(++count == n){
		cout << head->data << endl;
	}
}

void reverseLinkedList(Node *head){
	Node *current = head;
	Node *prev = NULL;
	Node *next = new Node;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
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
	cout << endl;
	// we are not updating the last Node in the main function
	removeEl(head, 85);
	traverse(head);
	cout << endl;
	cout << Search(head, 69) << endl;
	cout << nthTerm(head, 3) << endl;
	printReverse(head);
	cout << endl;
	nthFromLast(head, 1);
	reverseLinkedList(head);
	traverse(head);
}