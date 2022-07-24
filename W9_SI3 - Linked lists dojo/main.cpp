#include <iostream>
#include "Node.h"

int main() {

	Node lista;
	// LVL 0 - single list

	/*

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->value = 1;
	head->Next = second;
	second->value = 2;
	second->Next = third;
	third->value = 3;
	third->Next = NULL;

	lista.insertAtFront(&head, -5);
	lista.insertAtEnd(&head, 4);
	lista.displayList(head);*/

	// LVL 1 TESTS

	// LVL 2 - doubly list

	Node* head;
	Node* tail;

	Node* node = new Node();
	node->value = 4;
	node->Next = nullptr;
	node->previous = nullptr;
	head = node;
	tail = node;

	node = new Node();
	node->value = 5;
	node->Next = nullptr;
	node->previous = tail;
	tail->Next = node;
	tail = node;

	node = new Node();
	node->value = 6;
	node->Next = nullptr;
	node->previous = tail;
	tail->Next = node;
	tail = node;

	node = new Node();
	node->value = 7;
	node->Next = nullptr;
	node->previous = tail;
	tail->Next = node;
	tail = node;

	lista.displayDoubleListForward(head);
	std::cout << std::endl;
	lista.displayDoubleListBackward(tail);



	return 0;
}