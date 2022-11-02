#include<iostream>
using namespace std;

double add( int k, int j)
{
    return k + j;
}

double sub(int x, int y)
{
    return x - y;
}

double mul(int a, int b)
{
    return a * b;
}

double divide(int c, int d)
{
    return c / d;
}

int main()
{
    std::cout<<"enter first integer: ";
    double g{};
    std::cin>> g;
    
    std::cout<<"enter second integer: ";
    double h{};
    std::cin>> h;
    
    cout<<"Addition of two number is: "<< add(g,h)<<'\n';
    cout<<"Subtraction of two number is: "<< sub(g,h)<<'\n';
    cout<<"Multiplication of two number is: "<< mul(g,h)<<'\n';
    cout<<"Division of two number is: "<< divide(g,h)<<'\n';
    return 0;
}
