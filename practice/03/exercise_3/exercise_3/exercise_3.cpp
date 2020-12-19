// created by a.nikolskii 04.12.20

#include <iostream>
#include <iomanip>

const int BOTTOM = 1000;
const int TOP = 9999;


int main()
{
    for (int i = BOTTOM; i <= TOP; i += 3) {
        std::cout << std::setw(6) << i;
    }
}