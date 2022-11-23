// cplusplus link https://cplusplus.com/reference/vector\vector\swap-free
// swap (vector overload)
#include <iostream>
#include <vector>

main()
{
    unsigned int i;
    std::vector<int> foo(3, 100); // three ints with a value of 100
    std::vector<int> bar(5, 200); // five ints with a value of 200

    foo.swap(bar);

    std::cout << "foo contains:";
    for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    std::cout << "bar contains:";
    for (std::vector<int>::iterator it = bar.begin(); it != bar.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
