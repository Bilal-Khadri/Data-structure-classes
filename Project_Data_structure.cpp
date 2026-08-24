#include <iostream>
#include"clsStackArr.h"
using namespace std;



int main()
{

	clsStackArr <int> StackArr;

	StackArr.push(10);
	StackArr.push(20);
	StackArr.push(30);
	StackArr.push(40);
	StackArr.push(50);

	cout << "My stack : ";
	StackArr.print();

	cout << "\nsize : " << StackArr.size();
	cout << "\ntop : " << StackArr.top();
	cout << "\nbottom : " << StackArr.bottom();

	cout << "\n\nAfter popping : ";
	StackArr.pop();
	StackArr.print();

	cout << "\nsize after pop : " << StackArr.size() << endl;


	cout << "\nGet item : index 2 : " << StackArr.GetItem(2) << endl;

	cout << "\nAfter reverse : ";
	StackArr.Reverse();
	StackArr.print();

	cout << "\nUpdate item at index 1 : ";
	StackArr.UpdateItem(1, 299);
	StackArr.print();

	cout << "\nInsert item after index 2 : ";
	StackArr.InsertAfter(2, 444);
	StackArr.print();

	cout << "\nInsert item at bottom : ";
	StackArr.InsertAtBack(987);
	StackArr.print();

	cout << "\nsize : " << StackArr.size() << endl;


	cout << "\nList after clear  : ";
	StackArr.Clear();
	StackArr.print();

}
