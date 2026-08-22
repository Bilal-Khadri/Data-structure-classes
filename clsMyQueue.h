#pragma once
#include<iostream>
#include"clsMyDblLinkedList.h"


using namespace std;



template <class T> 

class clsMyQueue
{

protected: 

	//composition concept :
	clsMyDblLinkedList <T>MyList;

public:

	bool IsEmpty() {

		return MyList.IsEmpty();
	}

	void push(T value) {

		MyList.InsertAtEnd(value);

	}

	T back() {
		
		return MyList.GetItem(size() - 1);
	}

	T front() {

		return MyList.GetItem(0);
	}

	void pop() {

		MyList.DeleteFistNode();
	}

	void print() {

		MyList.PrintList();
	}

	int size() {

		return MyList.Size();
	}

	T GetItem(int index) {
		return MyList.GetItem(index);
	}

	void Reverse() {
		MyList.Reverse();
	}

	void UpdateItem(int index, T value) {
		MyList.UpdateItem(index, value);
	}

	//Insert after by index :
	void InsertAfter(int index,T value) {
		MyList.InsertAfter(index,value);
	}

	void InsertAtFront(T value) {
		MyList.InsertAtBeginning(value);
	}

	void InserAtBack(T value) {
		MyList.InsertAtEnd(value);
	}

	void clear() {
		MyList.Clear();
	}
};

