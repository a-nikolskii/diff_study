// created by a.nikolskii 04.12.20

#include <iostream>
#include <iomanip>

const int BOTTOM = 2;
const int TOP = 10;


int main()
{   
    double x = 2.3;

    double mult = 1;
    
    for (int i = BOTTOM; i <= TOP; i+=2) {
        mult *= (x - i);
    }

    std::cout << "x = " << x << std::endl;
    std::cout << "(x-2)(x-4)...(x-10) =  " << mult << std::endl;
}