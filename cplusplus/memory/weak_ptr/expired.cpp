// cplusplus link https://cplusplus.com/reference/memory\weak_ptr\expired
// weak_ptr::expired example
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> shared(new int(10));
    std::weak_ptr<int> weak(shared);

    std::cout << "1. weak " << (weak.expired() ? "is" : "is not") << " expired\n";

    shared.reset();

    std::cout << "2. weak " << (weak.expired() ? "is" : "is not") << " expired\n";

    return 0;
}
