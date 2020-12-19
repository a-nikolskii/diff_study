// created by a.nikiolsky 27.11.2020
#include <iostream>
#include <vector>

const std::vector<std::string> IMAGE = 
{"        /\\        \n",
 "       /  \\       \n",
 "      /    \\      \n",
 "     /------\\     \n",
 "    / |    | \\    \n" ,
 "      |    |       \n",
 "      |____|       \n",
};


int main()
{
    for (auto& string : IMAGE) {
        std::cout << string;
    }
}

