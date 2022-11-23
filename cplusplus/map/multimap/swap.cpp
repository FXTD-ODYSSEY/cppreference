// cplusplus link https://cplusplus.com/reference/map\multimap\swap
// swap multimaps
#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> foo, bar;

    foo.insert(std::make_pair('x', 100));
    foo.insert(std::make_pair('y', 200));

    bar.insert(std::make_pair('a', 11));
    bar.insert(std::make_pair('b', 22));
    bar.insert(std::make_pair('a', 55));

    foo.swap(bar);

    std::cout << "foo contains:\n";
    for (std::multimap<char, int>::iterator it = foo.begin(); it != foo.end(); ++it)
        std::cout << (*it).first << " => " << (*it).second << '\n';

    std::cout << "bar contains:\n";
    for (std::multimap<char, int>::iterator it = bar.begin(); it != bar.end(); ++it)
        std::cout << (*it).first << " => " << (*it).second << '\n';

    return 0;
}
