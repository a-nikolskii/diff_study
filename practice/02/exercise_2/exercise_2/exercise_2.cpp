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


template<typename ForwardIt>
ForwardIt min_item(ForwardIt first, ForwardIt last) {
    
    if(first == last) return last;
    ForwardIt smallest = first;
    first++;
    for (; first != last; ++first) {
        if (*first < *smallest) {
            smallest = first;
        }
    }
    return smallest;
}

template<typename ForwardIt>
ForwardIt max_item(ForwardIt first, ForwardIt last) {

    if(first == last) return last;
    ForwardIt biggest = first;
    first++;
    for (; first != last; ++first) {
        if (*biggest < *first) {
            biggest = first;
        }
    }
    return biggest;
}

int main()
{
    std::vector<double> v;

    for (int i = 0; i < 3; ++i) {
        v.push_back(get_value<double>(("Enter " +std::to_string(i + 1) + " number >_ ")));
    }

    std::cout << "Min = "<< *min_item(v.begin(), v.end()) << std::endl;
    std::cout << "Max = "<< *max_item(v.begin(), v.end()) << std::endl;

}
