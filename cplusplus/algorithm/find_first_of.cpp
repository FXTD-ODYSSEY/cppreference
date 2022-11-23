// cplusplus link https://cplusplus.com/reference/algorithm\find_first_of
// find_first_of example
#include <algorithm> // std::find_first_of
#include <cctype> // std::tolower
#include <iostream> // std::cout
#include <vector> // std::vector

bool comp_case_insensitive(char c1, char c2)
{
    return (std::tolower(c1) == std::tolower(c2));
}

int main()
{
    int mychars[] = { 'a', 'b', 'c', 'A', 'B', 'C' };
    std::vector<char> haystack(mychars, mychars + 6);
    std::vector<char>::iterator it;

    int needle[] = { 'A', 'B', 'C' };

    // using default comparison:
    it = find_first_of(haystack.begin(), haystack.end(), needle, needle + 3);

    if (it != haystack.end())
        std::cout << "The first match is: " << *it << '\n';

    // using predicate comparison:
    it = find_first_of(haystack.begin(), haystack.end(),
        needle, needle + 3, comp_case_insensitive);

    if (it != haystack.end())
        std::cout << "The first match is: " << *it << '\n';

    return 0;
}
