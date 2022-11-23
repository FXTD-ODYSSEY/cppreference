// cplusplus link https://cplusplus.com/reference/functional\function\operator%3D
// function::operator= example
#include <functional> // std::function, std::negate
#include <iostream> // std::cout

int main()
{
    std::function<int(int)> foo, bar;
    foo = std::negate<int>(); // target
    bar = foo; // copy
    foo = std::function<int(int)>([](int x) { return x + 1; }); // move
    bar = nullptr; // clear

    std::cout << "foo: " << foo(100) << '\n';

    return 0;
}
