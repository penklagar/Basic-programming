#include <iostream>
using namespace std;

int main()
{
    
    int userPin = 1234, pin, errorCounter = 0;
    do
    {
        cout <<"Enter the PIN: ";
        cin >>pin;
        if (pin != userPin)
            errorCounter ++;
    }
    while (errorCounter<3 && pin != userPin);
    
    if (errorCounter<3)
        cout <<"Loading....\n";
    else
        cout<<"Blocked.....\n";
    
    return 0;
}
