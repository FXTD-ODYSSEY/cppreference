// cppreference link https://en.cppreference.com/w/cpp/concepts/regular
#include <concepts>
#include <iostream>

template <std::regular T>
struct Single {
    T value;
    friend bool operator==(const Single&, const Single&) = default;
};

int main()
{
    Single<int> myInt1 { 4 };
    Single<int> myInt2;
    myInt2 = myInt1;

    if (myInt1 == myInt2)
        std::cout << "Equal\n";

    std::cout << myInt1.value << ' ' << myInt2.value << '\n';
}
