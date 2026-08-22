#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
    int _Size = 0;
    T* _TempArray;

public:

    T* OriginalArray;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _Size = Size;

        OriginalArray = new T[_Size];

    }

    ~clsDynamicArray()
    {

        delete[]  OriginalArray;

    }

    bool SetItem(int index, T Value)
    {

        if (index >= _Size || _Size < 0)
        {
            return false;
        }

        OriginalArray[index] = Value;
        return true;

    }

    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);

    }

    void PrintList()

    {

        for (int i = 0; i <= _Size - 1; i++)
        {
            cout << OriginalArray[i] << " ";
        }

        cout << "\n";

    }

    void Resize(int NewSize)
    {
        // If the requested size is negative,
        // we cannot create an array with a negative size.
        // So we make it 0.
        if (NewSize < 0) NewSize = 0;

        // Create a NEW dynamic array with the new size.
        // Example:
        // OriginalArray → [10][20][30]
        // NewSize = 5
        // _TempArray → [ ][ ][ ][ ][ ]
        _TempArray = new T[NewSize];

        // If the new array is smaller than the old array,
        // we cannot keep elements that don't fit.
        // Example:
        // Old size = 5
        // New size = 3
        // We can only keep the first 3 elements.
        if (NewSize < _Size)
            _Size = NewSize;

        // Copy the elements from the OLD array
        // into the NEW array.
        // Example:
        // OriginalArray → [10][20][30]
        // _TempArray    → [ ][ ][ ]
        // After copying:
        // _TempArray    → [10][20][30]
        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        // Update _Size to represent the NEW array size.
        _Size = NewSize;

        // Delete the OLD array from the heap.
        // We don't need it anymore because we copied
        // its data into the new array.
        delete[] OriginalArray;

        // Make OriginalArray point to the NEW array.
        // Before:
        // OriginalArray → OLD array (deleted)
        // After:
        // OriginalArray → NEW array
        OriginalArray = _TempArray;
    }

    T GetItem(int index) {
        return OriginalArray[index];
    }

    void Reverse() {

        _TempArray = new T[_Size];

        int count = 0;
        for (int i = _Size - 1; i >= 0; i--) {

            _TempArray[count] = OriginalArray[i];
            count++;
        }
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    void Clear() {
     
        _Size = 0;

       _TempArray = NULL;
        delete[]OriginalArray;
        OriginalArray = _TempArray;
    }

    bool DeleteItemAt(int index) {

        //this fuction to delete an item at specific index .
        //deleting by moving all item to left 
        //then resize the array : size -1 

        if (index < 0 || index >= _Size)return 0;

        //here we did _Size -1 in the loop :
        //because we will access the last element anyway by i + 1 at last iteration 
        for (int i = index; i < _Size - 1; i++) {
                OriginalArray[i] = OriginalArray[i + 1];
        }
        Resize(_Size - 1);
        return 1;
    }

    void DeleteFirstItem() {
        DeleteItemAt(0);
    }

    void DeleteLastItem() {
        DeleteItemAt(_Size - 1);
    }




};

