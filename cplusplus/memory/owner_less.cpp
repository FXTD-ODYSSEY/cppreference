// cplusplus link https://cplusplus.com/reference/memory\owner_less
// owner_less example
#include <iostream>
#include <memory>
#include <set>

int main()
{
    int* p = new int(10);

    std::shared_ptr<int> a(new int(20));
    std::shared_ptr<int> b(a, p); // alias constructor: co-owns a, points to p

    // standard set container: cannot contain duplicates.
    std::set<std::shared_ptr<int>> value_based; // uses std::less
    std::set<std::shared_ptr<int>, std::owner_less<std::shared_ptr<int>>> owner_based;

    value_based.insert(a);
    value_based.insert(b); // ok, different value

    owner_based.insert(a);
    owner_based.insert(b); // overwrites (same owned pointer)

    std::cout << "value_based.size() is " << value_based.size() << '\n';
    std::cout << "owner_based.size() is " << owner_based.size() << '\n';

    delete p;
    return 0;
}
