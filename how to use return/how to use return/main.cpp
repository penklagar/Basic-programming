#include<iostream>

using namespace std;

int getValueFromUser()
{
    std::cout<<"Enter the number: ";
    int input{};
    std::cin>>input;
    return input;
}

int main()
{
    int num{ getValueFromUser() };
    
    std::cout<<"The double number is: "<<num*2<<'\n';
    return 0;
}
