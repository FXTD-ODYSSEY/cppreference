// cppreference link https://en.cppreference.com/w/cpp/container/multiset/extract
#include <algorithm>
#include <iostream>
#include <set>
#include <string_view>

void print(std::string_view comment, const auto& data)
{
    std::cout << comment;
    for (auto datum : data)
        std::cout << ' ' << datum;

    std::cout << '\n';
}

int main()
{
    std::multiset<int> cont { 1, 2, 3 };

    print("Start:", cont);

    // Extract node handle and change key
    auto nh = cont.extract(1);
    nh.value() = 4;

    print("After extract and before insert:", cont);

    // Insert node handle back
    cont.insert(std::move(nh));

    print("End:", cont);
}
