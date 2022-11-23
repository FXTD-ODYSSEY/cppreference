// cplusplus link https://cplusplus.com/reference/iomanip\get_money
// get_money manipulator example
#include <iomanip> // std::get_money
#include <iostream> // std::cin, std::cout

int main()
{
    long double price;
    std::cout << "Please, enter the price: ";
    std::cin >> std::get_money(price);

    if (std::cin.fail())
        std::cout << "Error reading price\n";
    else
        std::cout << "The price entered is: " << price << '\n';

    return 0;
}
