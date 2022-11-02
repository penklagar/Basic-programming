#include <iostream>

using namespace std;

bool isPrimeNumber(int number)
{
    for(int i=2;i<number; i++)
    {
        if (number % i == 0)
            return false;
    }
        return true;
}

int main()
{
     
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    
    bool isPrimeFlag = isPrimeNumber(number);
    
    if(isPrimeFlag)
        cout<<"Prime Number"<<endl;
    else
        cout<<"Not a prime number"<<endl;

    return 0;
}
