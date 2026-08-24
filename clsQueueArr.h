#pragma once
#include<iostream>
#include"clsDynamicArray.h"


using namespace std;


template <class T>

class clsQueueArr
{

protected:
	clsDynamicArray<T> MyList;


public:


	void push(T value) {

		MyList.InserAtBeginning(value);
	}

	bool IsEmpty() {
		return MyList.IsEmpty();
	}

	void print() {
		MyList.PrintList();

	}

	int size() {
		return MyList.Size();
	}

	T front() {
		return MyList.GetItem(0);
	}

	T back() {

		return MyList.GetItem(size() - 1);
	}

	void InsertAtFront(T value) {
		MyList.InserAtBeginning(value);
	}

	void pop() {
		MyList.DeleteLastItem();
	}

	T GetItem(int index) {
		return MyList.GetItem(index);
	}
	void Reverse() {
		MyList.Reverse();
	}

	void UpdateItem(int index, T NewValue) {
		MyList.SetItem(index, NewValue);
	}

	void InsertAfter(int index, T value) {
		MyList.InsertAfter(index, value);
	}

	void InsertAtBack(T value) {
		MyList.InsertAtEnd(value);
	}

	void Clear() {
		MyList.Clear();
	}

	//push  .. size ..fornt .. back .. add at front .. add at back ..pop .. get item .. reverse .. 
	//update item .. insert after .. insert at front .. clear   . print 

};

