// created by a.nikolsky 27.11.2020

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

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

bool compare_number_count(const int& number) {
    if (number < 1000 || number > 9999) {
        return false;
    }
    else {
        return true;
    }
}

int main()
{
    int number = get_value<int>("Enter four-digit number >_ ", compare_number_count);
    std::string str = std::to_string(number);
    std::reverse(str.begin(), str.end());
    std::cout << str << std::endl;
}
