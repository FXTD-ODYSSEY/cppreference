// cppreference link https://en.cppreference.com/w/cpp/language/operator_logical
#include <iostream>
#include <sstream>
#include <string>
int main()
{
    int n = 2;
    int* p = &n;
    // pointers are convertible to bool
    if (p && *p == 2 // "*p" is safe to use after "p &&"
        || !p && n != 2) // || has lower precedence than &&
        std::cout << "true\n";

    // streams are also convertible to bool
    std::stringstream cin;
    cin << "3...\n"
        << "2...\n"
        << "1...\n"
        << "quit";
    std::cout << "Enter 'quit' to quit.\n";
    for (std::string line; std::cout << "> "
         && std::getline(cin, line)
         && line != "quit";)
        std::cout << line << '\n';
}
