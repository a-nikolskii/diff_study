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

    if (second < first) {
        std::cout << "MAX = " << first << std::endl;
        std::cout << "MIN = " << second << std::endl;
        std::cout << "The first number is " << std::abs(first - second) << " more then the second\n";
        return 0;
    }
    else if (first < second) {
        std::cout << "MAX = " << second << std::endl;
        std::cout << "MIN = " << first << std::endl;
        std::cout << "The second number is " << std::abs(first - second) << " more then the first\n";
        return 0;
    }
    else
    {
        std::cout << "Numbers are equel\n";
        return 0;
    }
}
