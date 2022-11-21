// cppreference link https://en.cppreference.com/w/cpp/algorithm/remove_copy
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>
int main()
{
    std::string str = "#Return #Value #Optimization";
    std::cout << "before: " << std::quoted(str) << "\n";

    std::cout << "after:  \"";
    std::remove_copy(str.begin(), str.end(),
        std::ostream_iterator<char>(std::cout), '#');
    std::cout << "\"\n";
}
