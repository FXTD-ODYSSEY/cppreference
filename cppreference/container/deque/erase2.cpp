// cppreference link https://en.cppreference.com/w/cpp/container/deque/erase2
#include <deque>
#include <iostream>
#include <numeric>
#include <string_view>

void print_container(std::string_view comment, const std::deque<char>& c)
{
    std::cout << comment << "{ ";
    for (auto x : c) {
        std::cout << x << ' ';
    }
    std::cout << "}\n";
}

int main()
{
    std::deque<char> cnt(10);
    std::iota(cnt.begin(), cnt.end(), '0');
    print_container("Initially, cnt = ", cnt);

    std::erase(cnt, '3');
    print_container("After erase '3', cnt = ", cnt);

    auto erased = std::erase_if(cnt, [](char x) { return (x - '0') % 2 == 0; });
    print_container("After erase all even numbers, cnt = ", cnt);
    std::cout << "Erased even numbers: " << erased << '\n';
}
