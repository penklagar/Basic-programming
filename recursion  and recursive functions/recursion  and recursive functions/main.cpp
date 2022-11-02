#include <iostream>
using namespace std;

int recursive_sum(int m, int n){
    if (m == n)
    return m;
    return m + recursive_sum(m + 1, n);
}


//sum between m and n.
int main()
{
    int m=1, n=522;
    
    /*int sum =0;
    for (int i=m; i<=n; i++){
        sum += i;
    }*/
    //cout<<"sum = "<<sum<<endl;
    
    cout<<"Sum = "<<recursive_sum(m, n)<<endl;
    
    return 0;
}
