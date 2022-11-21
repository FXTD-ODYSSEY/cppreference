// cppreference link https://en.cppreference.com/w/cpp/io/fpos/state
#include <cwchar>
#include <iostream>
#include <sstream>

int main()
{
    std::istringstream s("test");
    std::mbstate_t st = s.tellg().state();

    if (std::mbsinit(&st))
        std::cout << "The stream is in the initial shift state\n";
}
