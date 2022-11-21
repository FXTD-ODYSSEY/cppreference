// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/operator%2B%3D
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::string str;
    str.reserve(50); // reserves sufficient storage space to avoid memory reallocation
    std::cout << std::quoted(str) << '\n'; // empty string

    str += "This";
    std::cout << std::quoted(str) << '\n';

    str += std::string(" is ");
    std::cout << std::quoted(str) << '\n';

    str += 'a';
    std::cout << std::quoted(str) << '\n';

    str += { ' ', 's', 't', 'r', 'i', 'n', 'g', '.' };
    std::cout << std::quoted(str) << '\n';

    str += 76.85; // equivalent to str += static_cast<char>(76.85), might not be the intent
    std::cout << std::quoted(str) << '\n';
}
