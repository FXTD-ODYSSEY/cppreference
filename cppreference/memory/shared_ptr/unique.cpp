// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/unique
#include <iostream>
#include <memory>

int main()
{
    auto sp1 = std::make_shared<int>(5);
    std::cout << std::boolalpha;
    std::cout << "sp1.unique() == " << sp1.unique() << '\n';

    std::shared_ptr<int> sp2 = sp1;
    std::cout << "sp1.unique() == " << sp1.unique() << '\n';
}
