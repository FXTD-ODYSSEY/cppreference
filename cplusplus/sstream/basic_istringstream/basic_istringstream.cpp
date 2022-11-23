// cplusplus link https://cplusplus.com/reference/sstream\basic_istringstream\basic_istringstream
// istringstream constructors.
#include <iostream> // std::cout
#include <sstream> // std::istringstream
#include <string> // std::string

int main()
{

    std::string stringvalues = "125 320 512 750 333";
    std::istringstream iss(stringvalues);

    for (int n = 0; n < 5; n++) {
        int val;
        iss >> val;
        std::cout << val * 2 << '\n';
    }

    return 0;
}
