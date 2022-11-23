// cplusplus link https://cplusplus.com/reference/set\set\operators
// set comparisons
#include <iostream>
#include <set>

int main()
{
    std::set<int> foo, bar;
    foo.insert(10);
    bar.insert(20);
    bar.insert(30);
    foo.insert(40);

    // foo ({10,40}) vs bar ({20,30}):
    if (foo == bar)
        std::cout << "foo and bar are equal\n";
    if (foo != bar)
        std::cout << "foo and bar are not equal\n";
    if (foo < bar)
        std::cout << "foo is less than bar\n";
    if (foo > bar)
        std::cout << "foo is greater than bar\n";
    if (foo <= bar)
        std::cout << "foo is less than or equal to bar\n";
    if (foo >= bar)
        std::cout << "foo is greater than or equal to bar\n";

    return 0;
}
