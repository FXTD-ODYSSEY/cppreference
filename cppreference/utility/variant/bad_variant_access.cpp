// cppreference link https://en.cppreference.com/w/cpp/utility/variant/bad_variant_access
#include <iostream>
#include <variant>

int main()
{
    std::variant<int, float> v;
    v = 12;
    try {
        std::get<float>(v);
    } catch (const std::bad_variant_access& e) {
        std::cout << e.what() << '\n';
    }
}
