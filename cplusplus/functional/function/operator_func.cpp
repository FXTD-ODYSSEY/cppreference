// cplusplus link https://cplusplus.com/reference/functional\function\operator_func
// function::operator() example
#include <functional> // std::function, std::plus, std::minus, std::multiplies
#include <iostream> // std::cout

int main()
{
    // an array of functions:
    std::function<int(int, int)> fn[] = {
        std::plus<int>(),
        std::minus<int>(),
        std::multiplies<int>()
    };

    for (auto& x : fn)
        std::cout << x(10, 5) << '\n';

    return 0;
}
