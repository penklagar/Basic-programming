
#include <iostream>
using namespace std;
class base_class
{
public:
    void show() {
        cout<<"function show is in the new base class\n";
    }
    void display(){
        cout<<"function display is in the new base class\n";
    }
};
class derived_class
{
public:
    void show() {
        cout<<"function show is in the derived class\n";
    }
    void display() {
        cout<<"function display is in the derived class\n";
    }
};
int main() {
    base_class obj1;
    base_class *p;

    p = &obj1;
    p ->show();
    p ->display();
    
    derived_class obj2;
    derived_class *t;
    
    t = &obj2;
    t->show();
    t->display();
    getchar();
    return 0;
};
