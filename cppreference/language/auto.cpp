// cppreference link https://en.cppreference.com/w/cpp/language/auto
#include <iostream>
#include <utility>

template <class T, class U>
auto add(T t, U u) { return t + u; } // the return type is the type of operator+(T, U)

// perfect forwarding of a function call must use decltype(auto)
// in case the function it calls returns by reference
template <class F, class... Args>
decltype(auto) PerfectForward(F fun, Args&&... args)
{
    return fun(std::forward<Args>(args)...);
}

template <auto n> // C++17 auto parameter declaration
auto f() -> std::pair<decltype(n), decltype(n)> // auto can't deduce from brace-init-list
{
    return { n, n };
}

int main()
{
    auto a = 1 + 2; // type of a is int
    auto b = add(1, 1.2); // type of b is double
    static_assert(std::is_same_v<decltype(a), int>);
    static_assert(std::is_same_v<decltype(b), double>);

    auto c0 = a; // type of c0 is int, holding a copy of a
    decltype(auto) c1 = a; // type of c1 is int, holding a copy of a
    decltype(auto) c2 = (a); // type of c2 is int&, an alias of a
    std::cout << "before modification through c2, a = " << a << '\n';
    ++c2;
    std::cout << " after modification through c2, a = " << a << '\n';

    auto [v, w] = f<0>(); // structured binding declaration

    auto d = { 1, 2 }; // OK: type of d is std::initializer_list<int>
    auto n = { 5 }; // OK: type of n is std::initializer_list<int>
    //  auto e{1, 2};    // Error as of DR n3922, std::initializer_list<int> before
    auto m { 5 }; // OK: type of m is int as of DR n3922, initializer_list<int> before
    //  decltype(auto) z = { 1, 2 } // Error: {1, 2} is not an expression

    // auto is commonly used for unnamed types such as the types of lambda expressions
    auto lambda = [](int x) { return x + 3; };

    //  auto int x; // valid C++98, error as of C++11
    //  auto x;     // valid C, error in C++

    [](...) {}(c0, c1, v, w, d, n, m, lambda); // suppresses "unused variable" warnings
}
