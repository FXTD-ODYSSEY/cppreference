// cppreference link https://en.cppreference.com/w/cpp/memory/weak_ptr/reset
#include <iostream>
#include <memory>

int main()
{
    auto shared = std::make_shared<int>(), shared2 = shared, shared3 = shared2;

    auto weak = std::weak_ptr<int> { shared };

    std::cout << std::boolalpha
              << "shared.use_count(): " << shared.use_count() << '\n'
              << "weak.use_count(): " << weak.use_count() << '\n'
              << "weak.expired(): " << weak.expired() << '\n';

    weak.reset();

    std::cout << "weak.reset();\n"
              << "shared.use_count(): " << shared.use_count() << '\n'
              << "weak.use_count(): " << weak.use_count() << '\n'
              << "weak.expired(): " << weak.expired() << '\n';
}
