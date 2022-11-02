#include <iostream>

//what is the difference between linked lists and arrays?
//size of the array must be predefined but using dynamic array we can solve this issue.
//two command to allocate and deallocate memory.
using namespace std;

int main()
{
    int size;
    cout << "Size: ";
    cin>> size;
    //int myArray[size];
    int* myArray = new int[size];
    
    for(int i=0; i < size;i++) {
        cout << "Array [" << i << "]";
        cin >> myArray[i];
    }
    
    for (int i = 0; i < size; i++) {
        //cout << myArray[i] <<"  ";
        cout << *(myArray+i)<<"  ";
    }
    
    delete []myArray;
    myArray = NULL;
    
    return 0;
}
