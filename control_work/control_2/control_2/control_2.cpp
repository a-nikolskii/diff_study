// created by a.nikolsky 27.11.2020

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
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


bool compare_members_count(const int& count) {
    if (count <= 0 || count > 8) {
        return false;
    }
    else {
        return true;
    }
}


int main()
{
    int count = get_value<int>("Enter count of member in range [1;8] >_ ", compare_members_count);

    switch (count) {
    case 1: 
        std::cout << "solo\n"; 
        break;
    case 2:
        std::cout << "duo\n";
        break;
    case 3:
        std::cout << "trio\n";
        break;
    case 4:
        std::cout << "quartet\n";
        break;
    case 5:
        std::cout << "quintet\n";
        break;
    case 6:
        std::cout << "sextet\n";
        break;
    case 7:
        std::cout << "sepstet\n";
        break;
    case 8:
        std::cout << "octet\n";
        break;
    }

}

