// cppreference link https://en.cppreference.com/w/cpp/utility/functional/reference_wrapper/operator()
#include <functional>
#include <iostream>

void f1()
{
    std::cout << "reference to function called\n";
}
void f2(int n)
{
    std::cout << "bind expression called with " << n << " as the argument\n";
}

int main()
{
    std::reference_wrapper<void()> ref1 = std::ref(f1);
    ref1();

    auto b = std::bind(f2, std::placeholders::_1);
    auto ref2 = std::ref(b);
    ref2(7);

    auto c = [] { std::cout << "lambda function called\n"; };
    auto ref3 = std::ref(c);
    ref3();
}
