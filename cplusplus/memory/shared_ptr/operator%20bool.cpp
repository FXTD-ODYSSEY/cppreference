// cplusplus link https://cplusplus.com/reference/memory\shared_ptr\operator%20bool
// example of shared_ptr::operator bool
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> foo;
    std::shared_ptr<int> bar(new int(34));

    if (foo)
        std::cout << "foo points to " << *foo << '\n';
    else
        std::cout << "foo is null\n";

    if (bar)
        std::cout << "bar points to " << *bar << '\n';
    else
        std::cout << "bar is null\n";

    return 0;
}
