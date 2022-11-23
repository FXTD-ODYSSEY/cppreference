// cplusplus link https://cplusplus.com/reference/map\multimap\operators
// multimap comparisons
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> foo, bar;

    foo.insert(std::make_pair('a', 100));
    foo.insert(std::make_pair('z', 900));
    bar.insert(std::make_pair('b', 250));
    bar.insert(std::make_pair('b', 350));

    // foo ({{a,100},{z,900}}) vs bar ({b,250},{b,350}}):
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
