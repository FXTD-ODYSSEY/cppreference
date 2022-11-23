// cplusplus link https://cplusplus.com/reference/string\basic_string\getline
// extract to string
#include <iostream>
#include <string>

main()
{
    std::string name;

    std::cout << "Please, enter your full name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";

    return 0;
}
