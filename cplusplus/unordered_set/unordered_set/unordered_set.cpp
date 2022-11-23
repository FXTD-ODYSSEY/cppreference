// cplusplus link https://cplusplus.com/reference/unordered_set\unordered_set\unordered_set
// constructing unordered_sets
#include <iostream>
#include <string>
#include <unordered_set>

template <class T>
T cmerge(T a, T b)
{
    T t(a);
    t.insert(b.begin(), b.end());
    return t;
}

int main()
{
    std::unordered_set<std::string> first; // empty
    std::unordered_set<std::string> second({ "red", "green", "blue" }); // init list
    std::unordered_set<std::string> third({ "orange", "pink", "yellow" }); // init list
    std::unordered_set<std::string> fourth(second); // copy
    std::unordered_set<std::string> fifth(cmerge(third, fourth)); // move
    std::unordered_set<std::string> sixth(fifth.begin(), fifth.end()); // range

    std::cout << "sixth contains:";
    for (const std::string& x : sixth)
        std::cout << " " << x;
    std::cout << std::endl;

    return 0;
}
