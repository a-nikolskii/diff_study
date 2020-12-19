// created by a.nikolsky 27.11.2020

#include <iostream>
#include <string>

struct Human{
    std::string first_name;
    std::string last_name;
    std::string patronymic;
    std::string group;
    std::string date_of_birth;
};

std::ostream& operator << (std::ostream& stream, const Human& h) {
    stream << std::endl;
    stream << "first name:    " << h.first_name << std::endl;
    stream << "last name:     " << h.last_name << std::endl;
    stream << "patronymic:    " << h.patronymic << std::endl;
    stream << "group:         " << h.group << std::endl;
    stream << "date of birth: " << h.date_of_birth << std::endl;
    
    return stream;
}

void get_human_information(Human& h) {
 
    std::cout << "Enter first name >_ ";
    std::getline(std::cin, h.first_name);
    
    std::cout << "Enter last name >_ ";
    std::getline(std::cin, h.last_name);

    std::cout << "Enter patronymic >_ ";
    std::getline(std::cin, h.patronymic);

    std::cout << "Enter group >_ ";
    std::getline(std::cin, h.group);

    std::cout << "Enter date of birth dd.mm.yyyy >_ ";
    std::getline(std::cin, h.date_of_birth);

    return;
}

int main()
{
    Human h;
    get_human_information(h);
    std::cout << h << std::endl;
}


