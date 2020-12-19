// created by a.nikolsky 27.11.2020

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <string>
#include <sstream>


double rhomb_square(const double& side, const double& angle) {
    return 0.5 * side * sin(angle * M_PI / 180);
}


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

bool compare_angle(const double& angle) {
    if (angle >= 180 || angle <= 0) {
        return false;
    }
    else{
        return true;
    }
}

bool compare_side(const double& side) {
    if (side <= 0) {
        return false;
    }
    else {
        return true;
    }
}


int main()
{
    double side = get_value<double>("Enter side >_ ", compare_side);
    double angle = get_value<double>("Enter angle >_ ", compare_angle);
    
    std::cout << "Square = " << rhomb_square(side, angle) << std::endl;

}

