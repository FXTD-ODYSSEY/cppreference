// cplusplus link https://cplusplus.com/reference/ostream\basic_ostream\operator%3C%3C
// example on insertion
#include <iomanip> // std::setw
#include <iostream> // std::cout, std::right, std::endl

int main()
{
    int val = 65;

    std::cout << std::right; // right-adjusted (manipulator)
    std::cout << std::setw(10); // set width (extended manipulator)

    std::cout << val << std::endl; // multiple insertions

    return 0;
}
