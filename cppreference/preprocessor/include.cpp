// cppreference link https://en.cppreference.com/w/cpp/preprocessor/include
#if __has_include(<optional>)
#include <optional>
#define has_optional 1
template <class T>
using optional_t = std::optional<T>;
#elif __has_include(<experimental/optional>)
#include <experimental/optional>
#define has_optional -1
template <class T>
using optional_t = std::experimental::optional<T>;
#else
#define has_optional 0
#include <utility>

template <class V>
class optional_t {
    V v_ {};
    bool has_ { false };

public:
    optional_t() = default;
    optional_t(V&& v)
        : v_(v)
        , has_ { true }
    {
    }
    V value_or(V&& alt) const& { return has_ ? v_ : alt; }
    /*...*/
};
#endif

#include <iostream>

int main()
{
    if (has_optional > 0)
        std::cout << "<optional> is present\n";
    else if (has_optional < 0)
        std::cout << "<experimental/optional> is present\n";
    else
        std::cout << "<optional> is not present\n";

    optional_t<int> op;
    std::cout << "op = " << op.value_or(-1) << '\n';
    op = 42;
    std::cout << "op = " << op.value_or(-1) << '\n';
}
