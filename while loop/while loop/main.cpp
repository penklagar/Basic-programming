#include <iostream>


int main()
{
    int counter = 100;
    {
        while(counter<=500)
            if (counter % 3 == 0 && counter % 5 == 0)
                std::cout << counter << "is divisible\n";
        counter++;
    }
    return 0;
}
