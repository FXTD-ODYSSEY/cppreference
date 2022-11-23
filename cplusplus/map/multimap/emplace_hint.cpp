// cplusplus link https://cplusplus.com/reference/map\multimap\emplace_hint
// multimap::emplace_hint
#include <iostream>
#include <map>
#include <string>

int main()
{
    std::multimap<std::string, int> mymultimap;
    auto it = mymultimap.end();

    it = mymultimap.emplace_hint(it, "foo", 10);
    mymultimap.emplace_hint(it, "bar", 20);
    mymultimap.emplace_hint(mymultimap.end(), "foo", 30);

    std::cout << "mymultimap contains:";
    for (auto& x : mymultimap)
        std::cout << " [" << x.first << ':' << x.second << ']';
    std::cout << '\n';

    return 0;
}
