// cplusplus link https://cplusplus.com/reference/functional\function\target
// function::target example
#include <functional> // std::function, std::plus, std::minus
#include <iostream> // std::cout, std::boolalpha

int my_plus(int a, int b) { return a + b; }
int my_minus(int a, int b) { return a - b; }

int main()
{
    std::function<int(int, int)> foo = my_plus;
    std::function<int(int, int)> bar = std::plus<int>();

    // calling using functional form:
    std::cout << foo(100, 20) << '\n';
    std::cout << bar(100, 20) << '\n';

    // calling by invoking target:
    std::cout << (*foo.target<int (*)(int, int)>())(100, 20) << '\n';
    std::cout << (*bar.target<std::plus<int>>())(100, 20) << '\n';

    // changing target directly:
    *foo.target<int (*)(int, int)>() = &my_minus;
    std::cout << foo(100, 20) << '\n';

    return 0;
}
