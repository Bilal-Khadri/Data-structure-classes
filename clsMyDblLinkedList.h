#pragma once
#include<iostream>
using namespace std;


template <class T>
class clsMyDblLinkedList
{

protected : 

	int _Size = 0;

public:
	
	class Node {

	public:

		Node* Prev;
		T value;
		Node* Next;
	};
	

	Node* head = NULL;


	bool IsEmpty() {

		return (_Size == 0 ? 1 : 0);
	}

	 Node* Find(T value) {

		Node* Current = head;

		while (Current->Next != NULL) {
			if (Current->value == value)
				return Current;
			Current = Current->Next;

		}return NULL;
	}

	void InsertAtBeginning(T value) {

		Node* NewNode = new Node();

		NewNode->value = value;
		NewNode->Prev = NULL;
		NewNode->Next = head;

		if (head != NULL)
			head->Prev = NewNode;

		head = NewNode;

		_Size++;
	}

	void PrintList() {
		
		Node* Current = head;

		if (IsEmpty()) {
			cout << "The List is empty \n";
			return;
		}
		while (Current != NULL) {

			cout << Current->value << "  ";
			Current = Current->Next;

		}cout << "\n";
	}

	void InsertAfter(Node* node, T value) {

		Node* NewNode = new Node();
		NewNode->value = value;


		NewNode->Prev = node;
		NewNode->Next = node->Next;
		if (node->Next != NULL)
			node->Next->Prev = NewNode;
		node->Next = NewNode;

		_Size++;
	}

	void  InsertAtEnd(T value) {

		Node* NewNode = new Node;
		NewNode->value = value;
		NewNode->Next = NULL;

		if (head == NULL) {
			NewNode->Prev = NULL;
			head = NewNode;
			
		}
		else {

			Node* Current = head;

			while (Current->Next != NULL)
				Current = Current->Next;

			NewNode->Prev = Current;
			Current->Next = NewNode;
		}

		_Size++;
	}

	void DeleteFistNode() {

		if (IsEmpty())return;
		
		Node* Temp = head;

			head = head->Next;
			if(head!=NULL)
			head->Prev = NULL;

			delete Temp;

			_Size--;

	}

	void DeleteNode(Node * NodeToDelete) {

		if (IsEmpty())return;

		if (head == NodeToDelete)
			head = NodeToDelete->Next;

		if(NodeToDelete->Next!=NULL)
			NodeToDelete->Next->Prev = NodeToDelete->Prev;

		if (NodeToDelete->Prev != NULL)
			NodeToDelete->Prev->Next = NodeToDelete->Next;

		delete NodeToDelete;

		_Size--;

	}

	void DeleteLast() {

		Node* Current = head;

		if (IsEmpty())return;

		if (Current->Next == NULL) {
			head = NULL;
			delete Current;
			return;
		}
			while (Current->Next != NULL) {
				Current = Current->Next;
			}
			Current->Prev->Next = NULL;
			delete Current;

			_Size--;

	}

	int Size() {

		return _Size;
	}

	void Clear() {

		while (_Size > 0)
			DeleteFistNode();
	}

	
	void Reverse()
	{
		Node* Current = head;
		Node* Temp = nullptr;

		while (Current != nullptr)
		{
			// Swap next and prev
			Temp = Current->Prev;
			Current->Prev = Current->Next;
			Current->Next = Temp;

			// Move to the next node in the original list
			Current = Current->Prev;
		}

		// Update head
		if (Temp != nullptr)
			head = Temp->Prev;
	}

	Node* GetNode(int index) {

		int counter = 0;

		if (index > _Size - 1 || index < 0)return NULL;

		Node* Current = head;

		while (Current != NULL && Current->Next != NULL) {
			if (index == counter)
				break;
			Current = Current->Next;
			counter++;
		}
		return Current;
	}

	T GetItem(int index) {

		Node* N = GetNode(index);

		if (N == NULL)return NULL;

		return N->value;

	}

	bool UpdateItem(int index, T NewValue) {
		//here we access the node not the value (GetItem) 
		// .. because we need to change the original value of node .. not just a copy value 
		Node *N = GetNode(index);
		
		if (N != NULL)
		{
			N->value = NewValue; return 1;
		}
		return 0;
	
	}
	
	//this function isn't same the old insert after function .. we will pass index of node that will insert after : 
	bool InsertAfter(int Index, T Value) {
		//Get node by index : 
		Node *N = GetNode(Index);

		if (N != NULL) {

			//The old function :
			InsertAfter(N, Value);

			return 1;
		}
		return 0;
	}


};

