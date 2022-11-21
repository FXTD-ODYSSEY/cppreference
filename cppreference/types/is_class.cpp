// cppreference link https://en.cppreference.com/w/cpp/types/is_class
#include <iostream>
#include <type_traits>

struct A { };

class B { };

enum class E {};

union U {
    class UC { };
};
static_assert(not std::is_class_v<U>);
static_assert(std::is_class_v<U::UC>);

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_class<A>::value << ": A\n";
    std::cout << std::is_class_v<B> << ": B \n";
    std::cout << std::is_class_v<B*> << ": B* \n";
    std::cout << std::is_class_v<B&> << ": B& \n";
    std::cout << std::is_class_v<const B> << ": const B \n";
    std::cout << std::is_class<E>::value << ": E\n";
    std::cout << std::is_class_v<int> << ": int\n";
    std::cout << std::is_class_v<struct S> << ": struct S (incomplete)\n";
    std::cout << std::is_class_v<class C> << ": class C (incomplete)\n";
}
