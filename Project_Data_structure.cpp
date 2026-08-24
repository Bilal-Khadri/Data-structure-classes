#include <iostream>
#include"clsDynamicArray.h"
using namespace std;



int main()
{

	clsDynamicArray<int> Arr(4);
	cout << "Array items : \n";
	Arr.SetItem(0, 123);
	Arr.SetItem(1, 2);
	Arr.SetItem(2, 3);
	Arr.SetItem(3, 6);

	Arr.PrintList();

	//cout << "\nIs empty ? : " << Arr.IsEmpty() << endl;
	cout << "Array size = " << Arr.Size() << endl;

	/*Arr.Resize(2);
	cout << "\nAfter resize : \n";
	Arr.PrintList();
	cout << "\nArray size = " << Arr.Size() << endl;

	Arr.Resize(10);
	cout << "\nAfter resize : \n";
	Arr.PrintList();
	cout << "\nArray size = " << Arr.Size() << endl;*/
    
	/*cout << "\nGet item at index 2 : " << Arr.GetItem(2) << endl;
	cout << "\n";*/

	/*cout << "\nAfter reverse array : \n";
	Arr.Reverse();
	Arr.PrintList();*/

	/*cout << "\nAfter delete array : \n";
	Arr.Clear();
	Arr.PrintList();*/

	/*cout << "\nAfter deleting item at index 2 : ";
	Arr.DeleteItemAt(2);
	Arr.PrintList();
	cout << "\nSize : " << Arr.Size() << endl;*/

	/*cout << "Array after delete first item : \n";
	Arr.DeleteFirstItem();
	Arr.PrintList();*/

	/*cout << "\nAfter delete last item : \n";
	Arr.DeleteLastItem();
	Arr.PrintList();
	cout << "Array size = " << Arr.Size() << endl;*/

	//int index = Arr.Find(3);
	//cout << "\nIs item found or not : ";
	//if (index == -1)cout << "Not found \n";
	//else cout << "Yes Found . at index " << index << endl;

	//cout << "\nArray items after deleting item 3 : \n";
	//Arr.DeleteItem(3);
	//Arr.PrintList();
	//cout << "Array size = " << Arr.Size() << endl;

	cout << "\nArray items after inserting value after index 1 : \n";
	Arr.InsertAt(1,111);
	Arr.PrintList();
	cout << "Array size = " << Arr.Size() << endl;

	cout << "\nAfter inserting item at beginning :  \n";
	Arr.InserAtBeginning(343);
	Arr.InserAtBeginning(99);
	Arr.PrintList();
	cout << "Array size = " << Arr.Size() << endl;

	cout << "\nAfter inserting item before index 2 :  \n";
	Arr.InsertBefore(2,999);
	Arr.PrintList();
	cout << "Array size = " << Arr.Size() << endl;

	cout << "\ninserting item after index 2 :  \n";
	Arr.InsertAfter(2, 999);
	Arr.PrintList();
	cout << "Array size = " << Arr.Size() << endl;

	cout << "\ninserting item after index 2 :  \n";
	Arr.InsertAtEnd(1000);
	Arr.PrintList();
	cout << "Array size = " << Arr.Size() << endl;



}

