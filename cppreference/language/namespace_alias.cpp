// cppreference link https://en.cppreference.com/w/cpp/language/namespace_alias
#include <iostream>

namespace foo {
namespace bar {
    namespace baz {
        int qux = 42;
    }
}
}

namespace fbz = foo::bar::baz;

int main()
{
    std::cout << fbz::qux << '\n';
}
