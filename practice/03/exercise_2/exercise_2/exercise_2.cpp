// created by a.nikolskii 04.12.20

#include <iostream>

const int BOTTOM = 10;
const int TOP = 20;


int main()
{
    long long mult = 1;
    for (int i = BOTTOM; i <= TOP; ++i) {
        mult *= i;
    }
    std::cout << "Mul  =  " << mult << std::endl;
}
