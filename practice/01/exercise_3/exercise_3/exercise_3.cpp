// created by a.nikolsky 27.11.2020

#include <iostream>
#include <string>
#include <sstream>

template <typename T>
T get_value(std::string&& message, bool(*compare)(const T&) = compare_default) {

    T result;
    std::string buff = "";
    std::stringstream ss;

    do {
        ss.clear();
        buff = "";
        std::cout << message;
        std::getline(std::cin, buff);
        ss.str(buff);
        ss >> result;

    } while (ss.fail() || !compare(result));

    return result;
};

template <typename T>
bool compare_default(const T& value = 0) {
    return true;
}

void printResult(const int& a, const int& b) {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    if (b != 0) {
        std::cout << a << " / " << b << " = " << a / b << std::endl;
    }
    else {
        std::cout << "Division by zero is not available" << std::endl;
    }
    std::cout << "average = " << (a + b) / 2 << std::endl;
}

int main()
{
    int first = get_value<int>("Enter first number >_ ");
    int second = get_value<int>("Enter second number >_ ");
    printResult(first, second);
}

