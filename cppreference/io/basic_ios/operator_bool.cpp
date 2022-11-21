// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/operator_bool
#include <iostream>
#include <sstream>

int main()
{
    std::istringstream s("1 2 3 error");
    int n;
    std::cout << std::boolalpha << "s is " << static_cast<bool>(s) << '\n';
    while (s >> n) {
        std::cout << n << '\n';
    }
    std::cout << "s is " << static_cast<bool>(s) << '\n';
}
