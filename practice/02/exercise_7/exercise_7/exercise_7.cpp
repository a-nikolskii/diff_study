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

bool side_compare(const double& side) {
    return (side > 0 ? true : false);
}

int main (){
    
    double x = get_value<double>("Enter side x >_ ", side_compare);
    double y = get_value<double>("Enter side y >_ ", side_compare);
    double z = get_value<double>("Enter side z >_ ", side_compare);

    if (x + y > z && x + z > y && y + z > x) {
        std::cout << "Triangle is existing\n";
    }
    else {
        std::cout << "Triangle isn`t existing\n";
    }
}

