#include <iostream>

using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a,float b,float c);

int main()
{
    cout<< sum(5,6)<<endl;
    cout<< sum(6.5, 7.9)<<endl;
    cout<< sum(3.8, 6.2, 4.5);
    return 0;
}
int sum(int a, int b){
    return a+b;
}
double sum(double a, double b){
    return a+b;
}
float sum(float a, float b, float c){
    return a+b+c;
}
