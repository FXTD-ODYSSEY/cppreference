// cplusplus link https://cplusplus.com/reference/iomanip\get_time
// get_time example
#include <ctime> // struct std::tm
#include <iomanip> // std::get_time
#include <iostream> // std::cin, std::cout

int main()
{
    struct std::tm when;
    std::cout << "Please, enter the time: ";
    std::cin >> std::get_time(&when, "%R"); // extract time (24H format)

    if (std::cin.fail())
        std::cout << "Error reading time\n";
    else {
        std::cout << "The time entered is: ";
        std::cout << when.tm_hour << " hours and " << when.tm_min << " minutes\n";
    }

    return 0;
}
