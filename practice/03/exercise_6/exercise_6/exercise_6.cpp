// created by a.nikolskii 04.12.20

#include <iostream>
#include <iomanip>

const int BOTTOM = 1;
const int TOP = 10; // number N


int main()
{

    double base = 2.7; // number A

    std::cout << std::left << "pow   |" <<
    std::right << std::setw(15) << " pow(base, i)" << std::endl;

    std::cout << "------|---------------" << std::endl;

    for (int i = BOTTOM; i <= TOP; ++i) {
        std::cout << std::setfill('.') << std::left << std::setw(5) << i << " |" <<
        std::right<< std::setw(15) << pow(base, i) << std::endl;
    }

}