// created by a.nikolskii 04.12.20

#include <iostream>
#include <iomanip>

const int BOTTOM = 1;
const int TOP = 20;


int main()
{   
    // seaquens is pow (2, i), i = 1, 2 ... 
    for (int i = BOTTOM; i <= TOP; ++i) {
        std::cout << std::setw(10) << (long long)pow(2, i) << std::endl;
    }
}