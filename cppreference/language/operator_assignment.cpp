// cppreference link https://en.cppreference.com/w/cpp/language/operator_assignment
#include <iostream>

int main()
{
    int n = 0; // not an assignment

    n = 1; // direct assignment
    std::cout << n << ' ';

    n = {}; // zero-initialization, then assignment
    std::cout << n << ' ';

    n = 'a'; // integral promotion, then assignment
    std::cout << n << ' ';

    n = { 'b' }; // explicit cast, then assignment
    std::cout << n << ' ';

    n = 1.0; // floating-point conversion, then assignment
    std::cout << n << ' ';

    //  n = {1.0};        // compiler error (narrowing conversion)

    int& r = n; // not an assignment
    r = 2; // assignment through reference
    std::cout << n << '\n';

    [[maybe_unused]] int* p;
    p = &n; // direct assignment
    p = nullptr; // null-pointer conversion, then assignment

    struct {
        int a;
        std::string s;
    } obj;
    obj = { 1, "abc" }; // assignment from a braced-init-list
    std::cout << obj.a << ':' << obj.s << '\n';
}
