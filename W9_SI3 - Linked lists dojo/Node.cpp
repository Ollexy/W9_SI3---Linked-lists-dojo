#include "Node.h"
#include <iostream>

void Node::insertAtFront(Node** head, int newValue){
	Node* newNode = new Node();
	newNode->value = newValue;

	newNode->Next = *head;

	*head = newNode;
}

void Node::insertAtEnd(Node** head, int newValue) {
	Node* newNode = new Node();
	newNode->value = newValue;

	//check if list is empty, if its, newNode will be head;
	if (*head == NULL) {
		*head = newNode;
		return;
	}
	//find last node
	Node* last = *head;
	while (last->Next != NULL)
		last = last->Next;
	//instert node after last
	last->Next = newNode;
}

void Node::insertAfter(Node* previous, int newValue) {
	if (previous == NULL) {
		std::cout << "Previous node can't be NULL";
		return;
	}

	Node* newNode = new Node();
	newNode->value = newValue;

	//insert after
	newNode->Next = previous->Next;
	previous->Next = newNode;
}

void Node::displayList(Node* n) {
	while (n != 0) {
		std::cout << n->value << std::endl;
		n = n->Next;
	}
}

void Node::displayDoubleListForward(Node* head){
	Node* traverser = head;
	while (traverser != nullptr) {
		std::cout << traverser->value << std::endl;
		traverser = traverser->Next;
	}
}

void Node::displayDoubleListBackward(Node* tail) {
	Node* traverser = tail;
	while (traverser != nullptr) {
		std::cout << traverser->value << std::endl;
		traverser = traverser->previous;
	}
}
