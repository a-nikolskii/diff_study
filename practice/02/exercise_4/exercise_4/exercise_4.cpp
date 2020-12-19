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


int main()
{
    std::vector<double> v;

    for (int i = 0; i < 3; ++i) {
        v.push_back(get_value<double>(("Enter " + std::to_string(i + 1) + " number >_ ")));
    }

    for (const auto& it : v) {
        if (it >= 0 ) {
            std::cout << pow(it, 3) << ", ";
        }
    }
    std::cout << std::endl;
}