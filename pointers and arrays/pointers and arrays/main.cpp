#include<iostream>

using namespace std;

int main()
{
    /*int luckynumbers[5] = {2,3,5,7,9};
    cout<< luckynumbers << endl;
    cout<< &luckynumbers[0] << endl;
    cout<< luckynumbers[2] << endl;
    cout<< &luckynumbers[2] << endl;
    cout<< *(luckynumbers + 2) << endl;
    cout<< (luckynumbers + 2) << endl;*/
    
    int luckynumbers[5];
    
    for (int i = 0; i <= 4; i++) {
        cout << "Number: ";
        cin >> luckynumbers[i];
    }
    for (int i = 0; i <= 5; i++) {
        cout << *(luckynumbers+i)<<"  ";
    }
    
    return 0;
} 
