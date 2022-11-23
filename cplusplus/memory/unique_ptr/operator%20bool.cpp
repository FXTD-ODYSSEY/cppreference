// cplusplus link https://cplusplus.com/reference/memory\unique_ptr\operator%20bool
// example of unique_ptr::operator bool
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> foo;
    std::unique_ptr<int> bar(new int(12));

    if (foo)
        std::cout << "foo points to " << *foo << '\n';
    else
        std::cout << "foo is empty\n";

    if (bar)
        std::cout << "bar points to " << *bar << '\n';
    else
        std::cout << "bar is empty\n";

    return 0;
}
