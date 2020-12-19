// created by a.nikolsky 02.12.2020

#include <iostream>
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



int main()
{
    double first = get_value<double>("Enter first number >_ ");
    double second = get_value<double>("Enter second number >_ ");

    if (first < second) 
    {
        std::cout << "Max = " << second << std::endl;
        std::cout << "Min = " << first << std::endl;
    }
    else if (second < first)
    {
        std::cout << "Max = " << first << std::endl;
        std::cout << "Min = " << second << std::endl;
    }
    else
    {
        std::cout << "Numbers are equel\n";
    }
}
