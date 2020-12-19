// created by a.nikolskii 04.12.20

#include <iostream>

const int BOTTOM = 1;
const int TOP = 10;


int main()
{
    int sum = 0;
    for (int i = BOTTOM; i <= TOP; ++i) {
        sum += i;
    }
    std::cout << "Sum =  " << sum << std::endl;
}

