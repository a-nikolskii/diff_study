// created by a.nikolsky 02.12.2020

#include <iostream>
#include <sstream>
#include <vector>

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


bool is_even(const int& number) {
     return (number % 2 == 0 ? true : false);
}

bool is_positive(const int& number) {
    return (number > 0 ? true : false);
}


int main()
{   

    int number;
    do {
        number = get_value<int>("Enter integer (0 to exit) >_ ");
        if (is_positive(number) && is_even(number)) {
            std::cout << number << " is positive and even" << std::endl;
        }
        else {
            std::cout << number << " isn`t positive and even" << std::endl;
        }
        std::cout << std::endl;
    } while (number != 0);
}