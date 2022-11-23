// cplusplus link https://cplusplus.com/reference/memory\weak_ptr\swap-free
// weak_ptr swap specialization
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> sp1(new int(10));
    std::shared_ptr<int> sp2(new int(20));

    std::weak_ptr<int> wp1(sp1);
    std::weak_ptr<int> wp2(sp2);

    swap(wp1, wp2);

    std::cout << "sp1 -> " << *sp1 << '\n';
    std::cout << "sp2 -> " << *sp2 << '\n';
    std::cout << "wp1 -> " << *wp1.lock() << '\n';
    std::cout << "wp2 -> " << *wp2.lock() << '\n';

    return 0;
}
