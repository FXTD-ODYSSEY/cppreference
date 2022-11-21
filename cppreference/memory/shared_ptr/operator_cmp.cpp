// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr/operator_cmp
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> p1(new int(42));
    std::shared_ptr<int> p2(new int(42));

    std::cout << std::boolalpha
              << "(p1 == p1)      : " << (p1 == p1) << '\n'
              << "(p1 <=> p1) == 0: " << ((p1 <=> p1) == 0) << '\n' // Since C++20

              // p1 and p2 point to different memory locations, so p1!= p2
              << "(p1 == p2)      : " << (p1 == p2) << '\n'
              << "(p1 < p2)       : " << (p1 < p2) << '\n'
              << "(p1 <=> p2) < 0 : " << ((p1 <=> p2) < 0) << '\n' // Since C++20
              << "(p1 <=> p2) == 0: " << ((p1 <=> p2) == 0) << '\n'; // Since C++20
}
