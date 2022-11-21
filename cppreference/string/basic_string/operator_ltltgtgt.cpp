// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/operator_ltltgtgt
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string greeting = "Hello, whirled!";
    std::istringstream iss(greeting);

    std::string hello_comma, whirled, word;

    iss >> hello_comma;
    iss >> whirled;

    std::cout << greeting << '\n'
              << hello_comma << '\n'
              << whirled << '\n';

    // Reset the stream
    iss.clear();
    iss.seekg(0);

    while (iss >> word)
        std::cout << '+' << word << '\n';
}
