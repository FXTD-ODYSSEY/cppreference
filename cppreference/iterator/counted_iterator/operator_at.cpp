// cppreference link https://en.cppreference.com/w/cpp/iterator/counted_iterator/operator_at
#include <array>
#include <iostream>
#include <iterator>
#include <list>

int main()
{
    std::array array { 'A', 'B', 'C', 'D', 'E' };

    std::counted_iterator it { array.begin() + 1, /*count:*/ 3 };

    for (int i {}; i != it.count(); ++i)
        std::cout << it[i] << ' ';
    std::cout << '\n';

    for (int i {}; i != it.count(); ++i)
        it[i] += ('E' - 'A');

    for (int i {}; i != it.count(); ++i)
        std::cout << it[i] << ' ';
    std::cout << '\n';

    std::list list { 'X', 'Y', 'Z', 'W' };
    std::counted_iterator it2 { list.begin(), 3 };
    //  char x = it2[0]; // Error: requirement `random_access_iterator` was not satisfied.
    std::cout << *it2 << '\n'; // OK
}
