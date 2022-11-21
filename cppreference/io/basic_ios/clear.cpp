// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/clear
#include <iostream>
#include <string>

int main()
{
    for (char c : { '\n', '4', '1', '.', '3', '\n', 'Z', 'Y', 'X' })
        std::cin.putback(c); // emulate user's input (not portable: see ungetc Notes)

    double n;
    while (std::cout << "Please, enter a number: " && !(std::cin >> n)) {
        std::cin.clear();
        std::string line;
        std::getline(std::cin, line);
        std::cout << line << "\nI am sorry, but '" << line << "' is not a number\n";
    }
    std::cout << n << "\nThank you for entering the number " << n << '\n';
}
