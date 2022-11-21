// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multimap/extract
#include <algorithm>
#include <iostream>
#include <string_view>
#include <unordered_map>

void print(std::string_view comment, const auto& data)
{
    std::cout << comment;
    for (auto [k, v] : data)
        std::cout << ' ' << k << '(' << v << ')';

    std::cout << '\n';
}

int main()
{
    std::unordered_multimap<int, char> cont { { 1, 'a' }, { 2, 'b' }, { 3, 'c' } };

    print("Start:", cont);

    // Extract node handle and change key
    auto nh = cont.extract(1);
    nh.key() = 4;

    print("After extract and before insert:", cont);

    // Insert node handle back
    cont.insert(std::move(nh));

    print("End:", cont);
}
