// cplusplus link https://cplusplus.com/reference/functional\function\operator_bool
// function::operator bool example
#include <functional> // std::function, std::plus
#include <iostream> // std::cout

int main()
{
    std::function<int(int, int)> foo, bar;
    foo = std::plus<int>();

    foo.swap(bar);

    std::cout << "foo is " << (foo ? "callable" : "not callable") << ".\n";
    std::cout << "bar is " << (bar ? "callable" : "not callable") << ".\n";

    return 0;
}
