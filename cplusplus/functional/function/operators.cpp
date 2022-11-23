// cplusplus link https://cplusplus.com/reference/functional\function\operators
// function comparisons vs nullptr
#include <functional> // std::function, std::plus
#include <iostream> // std::cout

int main()
{
    std::function<int(int, int)> foo = std::plus<int>();
    std::function<int(int, int)> bar;

    std::cout << "foo is " << (foo == nullptr ? "not callable" : "callable") << ".\n";
    std::cout << "bar is " << (bar == nullptr ? "not callable" : "callable") << ".\n";

    return 0;
}
