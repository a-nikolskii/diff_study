// created by a.nikolsky 02.12.2020

#include <iostream>
#include <sstream>
#include <vector>

const int DIGIT_COUNT = 4;

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

bool compare_digit_count(const int& value) {
    if (value >= pow(10, (DIGIT_COUNT - 1)) && 
        value <= pow(10, DIGIT_COUNT) - 1 ) {
        return true;
    }
    else return false;
}

template <typename FIterator>
long int sum(FIterator first, FIterator last) {
    long sum = 0;
    for (; first != last; ++first) {
        sum += *first;
    }
    return sum;
}

int main() {

    int number = get_value<int>("Enter four-digit number >_ ", compare_digit_count);

    std::vector<int> v;
    for (int i = pow(10, (DIGIT_COUNT - 1)); i > 0; i /= 10) {
        v.push_back(number / i);
        number = number % i;
    }

    if (sum(v.begin(), v.begin() + v.size() / 2) ==
        (sum(v.rbegin(), v.rbegin() + v.size() / 2))) {
        std::cout << "YES" << std::endl;
    }
    else 
        std::cout << "NO" << std::endl;

   

}
