#pragma once
#include<iostream>
#include"clsMyQueue.h"

using namespace std;


template <class T> 

// Stack class inherit from Queue class :
class clsMyStack : public clsMyQueue<T>
{

public:

	// here we add the methods that class Queue doesn't have  .. or has but not the same thing
	//like push in queue not the same in stack  .. etc ... even the same name .. when object call push 
	//for example will call this function not push of Queue : that's called override .

	void push(T value) {
		clsMyQueue<int>::MyList.InsertAtBeginning(value);
	}

	T top() {
		return clsMyQueue<T>::front();
	}

	T bottom() {
		return clsMyQueue<T>::back();
	}



};

