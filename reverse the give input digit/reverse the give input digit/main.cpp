#include <iostream>
using namespace std;
int main()
{
    //Reversing the number
    
    int number, reversedNumber = 0;
    cout << "Number: ";
    cin >> number;
    
    while (number != 0)
    {
        //reversedNumber = reversedNumber * 10;
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }
    cout<<"Reversed: "<< reversedNumber<<'\n';
    return 0;
}

