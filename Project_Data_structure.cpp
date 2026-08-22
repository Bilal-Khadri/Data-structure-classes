#include <iostream>
#include"clsDynamicArray.h"
using namespace std;



int main()
{

	clsDynamicArray<int> Arr(4);

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

	cout << "\nAfter delete last item : \n";
	Arr.DeleteLastItem();
	Arr.PrintList();
	cout << "\nArray size = " << Arr.Size() << endl;

}

