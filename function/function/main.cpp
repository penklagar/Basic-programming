#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age=0)
{
    cout<<"My name is "<<name<<"."<<'\n';
    cout<<"I am from "<<city<<"."<<'\n';
    if(age != 0)
        cout<<"I am "<<age<<" years old."<<'\n';
}

int main()
{
    //introduceMe("Manvith","Udupi",33);
    //introduceMe("Prathik","Manipal");
    string name, city;
    int age;
    
    cout<<"Name: ";
    cin>>name;
    
    cout<<"City: ";
    cin>>city;
    
    cout<<"Age: ";
    cin>>age;
    
    introduceMe(name, city, age);
    
    
    
    return 0;
}
