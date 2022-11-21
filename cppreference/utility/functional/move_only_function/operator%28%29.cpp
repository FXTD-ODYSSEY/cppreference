// cppreference link https://en.cppreference.com/w/cpp/utility/functional/move_only_function/operator()
#include <functional>
#include <iostream>

void call(std::move_only_function<int() const> f) // can be passed by value
{
    std::cout << f() << '\n';
}

int normal_function()
{
    return 42;
}

int main()
{
    int n = 1;
    auto lambda = [&n]() { return n; };
    std::move_only_function<int() const> f = lambda;
    call(std::move(f));

    n = 2;
    call(lambda);

    f = normal_function;
    call(std::move(f));
}
