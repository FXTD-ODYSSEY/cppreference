// cppreference link https://en.cppreference.com/w/cpp/utility/functional/move_only_function/operator_bool
#include <functional>
#include <iostream>

void sampleFunction()
{
    std::cout << "This is the sample function!\n";
}

void checkFunc(std::move_only_function<void() const> const& func)
{
    // Use operator bool to determine if callable target is available.
    if (func) {
        std::cout << "Function is not empty! Calling function.\n";
        func();
    } else {
        std::cout << "Function is empty. Nothing to do.\n";
    }
}

int main()
{
    std::move_only_function<void() const> f1 {};
    std::move_only_function<void() const> f2 { sampleFunction };

    std::cout << "f1: ";
    checkFunc(f1);

    std::cout << "f2: ";
    checkFunc(f2);
}
