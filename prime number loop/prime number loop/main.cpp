#include<iostream>

using namespace std;

bool isPrimeNumber(int number){
    for(int i=2; i<number; i++){
        if(number% i==0)
            return false;
    }
    return true;
}
int main()
{
    //int number;
    //cout<<"Enter the number: ";
    //cin>>number;
    
   /* bool isPrimeFlag= true;
    for(int i=2; i<number; i++){
        if(number% i==0){
            isPrimeFlag =false;
            break;
        }*/
   /* bool isPrimeFlag = isPrimeNumber(number);
    if (isPrimeFlag)
        cout<<"PRIME NUMBER"<<endl;
    else
        cout<<"NOT A PRIME NUMBER"<<endl; */
    
    for (int i=1; i<1001; i++){
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
            cout<<i<<" PRIME NUMBER \n";
        else
            cout<<i<<" NOT A PRIME NUMBER \n";
        
    }
return 0;
}



