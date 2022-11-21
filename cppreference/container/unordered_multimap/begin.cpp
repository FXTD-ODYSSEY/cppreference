// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multimap/begin
#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

int main()
{
    auto show_node = [](const std::pair<std::string, std::string>& node) {
        std::cout << node.first << " :  " << node.second << '\n';
    };

    std::unordered_multimap<std::string, std::string> lemmas;
    assert(lemmas.begin() == lemmas.end()); // OK
    assert(lemmas.cbegin() == lemmas.cend()); // OK

    lemmas.insert({ "1. ∀x ∈ N ∃y ∈ N", "x ≤ y" });
    show_node(*lemmas.cbegin());
    assert(lemmas.begin() != lemmas.end()); // OK
    assert(lemmas.cbegin() != lemmas.cend()); // OK
    lemmas.begin()->second = "x < y";
    show_node(*lemmas.cbegin());

    lemmas.insert({ "2. ∀x,y ∈ N", "x = y V x ≠ y" });
    show_node(*lemmas.cbegin());

    lemmas.insert({ "3. ∀x ∈ N ∃y ∈ N", "y = x + 1" });
    show_node(*lemmas.cbegin());

    std::cout << "lemmas: \n";
    std::for_each(lemmas.cbegin(), lemmas.cend(),
        [&](const auto& n) { show_node(n); });
    std::cout << "\n";
}
