// created by a.nikolsky 27.11.2020

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <string>
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

bool compare_positive(const int& count) {
    if (count <= 0) return false;
    else return true;
}


int main() {
    int count = get_value<int>("Enter number`s count (1, 2 ....) >_ ", compare_positive);

    std::vector<double> v;

    
    for (int i = 0; i < count; ++i) {
        v.push_back(get_value<double>("Enter " + std::to_string(i + 1) + " number >_ "));
    }

    double min = v.front();
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] < i) {
            min = v[i];
        }
    }

    std::cout << "min number is " << min << std::endl;
    

}