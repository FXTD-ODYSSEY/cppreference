// cppreference link https://en.cppreference.com/w/cpp/types/is_convertible
#include <iomanip>
#include <iostream>
#include <string>
#include <string_view>
#include <type_traits>

class E {
public:
    template <class T>
    E(T&&) { }
};

int main()
{
    class A { };
    class B : public A { };
    class C { };
    class D {
    public:
        operator C() { return c; }
        C c;
    };

    std::cout
        << std::boolalpha
        << std::is_convertible_v<B*, A*> << ' ' // true
        << std::is_convertible_v<A*, B*> << ' ' // false
        << std::is_convertible_v<D, C> << ' ' // true
        << std::is_convertible_v<B*, C*> << ' ' // false
        // Note that the Perfect Forwarding constructor makes the class E be
        // "convertible" from everything. So, A is replaceable by B, C, D..:
        << std::is_convertible_v<A, E> << ' '; // true

    using std::operator"" s, std::operator"" sv;

    auto stringify = []<typename T>(T x) {
        if constexpr (std::is_convertible_v<T, std::string> or std::is_convertible_v<T, std::string_view>) {
            return x;
        } else {
            return std::to_string(x);
        }
    };

    const char* three = "three";

    std::cout
        << std::is_convertible_v<std::string_view, std::string> << ' ' // false
        << std::is_convertible_v<std::string, std::string_view> << ' ' // true
        << std::quoted(stringify("one"s)) << ' '
        << std::quoted(stringify("two"sv)) << ' '
        << std::quoted(stringify(three)) << ' '
        << std::quoted(stringify(42)) << ' '
        << std::quoted(stringify(42.)) << '\n';
}
