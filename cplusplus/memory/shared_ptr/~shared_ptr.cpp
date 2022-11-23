// cplusplus link https://cplusplus.com/reference/memory\shared_ptr\~shared_ptr
// shared_ptr destructor example
#include <iostream>
#include <memory>

int main()
{
    auto deleter = [](int* p) {
        std::cout << "[deleter called]\n";
        delete p;
    };

    std::shared_ptr<int> foo(new int, deleter);

    std::cout << "use_count: " << foo.use_count() << '\n';

    return 0; // [deleter called]
}
