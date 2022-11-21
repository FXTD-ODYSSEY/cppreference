// cppreference link https://en.cppreference.com/w/cpp/utility/functional/move_only_function/swap2
#include <concepts>
#include <functional>
#include <iostream>

void foo(const char* str, int x)
{
    std::cout << "foo(\"" << str << "\", " << x << ")\n";
}

void bar(const char* str, int x)
{
    std::cout << "bar(\"" << str << "\", " << x << ")\n";
}

int main()
{
    std::move_only_function<void(const char*, int) const> f1 { foo };
    std::move_only_function<void(const char*, int) const> f2 { bar };

    f1("f1", 1);
    f2("f2", 2);

    std::cout << "std::ranges::swap(f1, f2);\n";
    std::ranges::swap(f1, f2); // finds the hidden friend

    f1("f1", 1);
    f2("f2", 2);
}
