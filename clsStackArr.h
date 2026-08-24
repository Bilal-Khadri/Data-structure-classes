#pragma once
#include<iostream>
#include"clsQueueArr.h"

using namespace std;


template <class T>

// Stack class inherit from Queue class :
class clsStackArr : public clsQueueArr<T>
{

public:

	// After inheritance we add the methods that class Queue doesn't have  .. or has but not the same thing
	//like push in queue not the same in stack  .. etc ... even the same name .. when object call push 
	//for example will call this function not push of Queue : that's called override .

	void push(T value) {
		clsQueueArr<int>::MyList.InsertAtEnd(value);
	}

	T top() {
		return clsQueueArr<T>::front();
	}

	T bottom() {
		return clsQueueArr<T>::back();
	}



};