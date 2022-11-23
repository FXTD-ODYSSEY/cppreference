// cplusplus link https://cplusplus.com/reference/utility\move
// move example
#include <iostream> // std::cout
#include <string> // std::string
#include <utility> // std::move
#include <vector> // std::vector

int main()
{
    std::string foo = "foo-string";
    std::string bar = "bar-string";
    std::vector<std::string> myvector;

    myvector.push_back(foo); // copies
    myvector.push_back(std::move(bar)); // moves

    std::cout << "myvector contains:";
    for (std::string& x : myvector)
        std::cout << ' ' << x;
    std::cout << '\n';

    return 0;
}
