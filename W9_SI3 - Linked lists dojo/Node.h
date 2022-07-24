#pragma once
class Node
{
public:
	int value;
	int length;
	Node* previous;
	Node* Next;

	void insertAtFront(Node** head, int newValue);
	void insertAtEnd(Node** head, int newValue);
	void insertAfter(Node* previous, int newValue);
	void displayList(Node* n);
	void displayDoubleListForward(Node* head);
	void displayDoubleListBackward(Node* tail);
	void testHead();
	void testTail();
	void testLength();
	void testInsert();
	void testRemove();
	void testIterate();
};

