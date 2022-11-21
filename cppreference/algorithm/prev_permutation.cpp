// cppreference link https://en.cppreference.com/w/cpp/algorithm/prev_permutation
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
int main()
{
    std::string s = "abc";
    std::sort(s.begin(), s.end(), std::greater<char>());
    do {
        std::cout << s << ' ';
    } while (std::prev_permutation(s.begin(), s.end()));
    std::cout << '\n';
}
