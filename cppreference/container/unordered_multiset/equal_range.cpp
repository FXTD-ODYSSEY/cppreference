// cppreference link https://en.cppreference.com/w/cpp/container/unordered_multiset/equal_range
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_set>

int main()
{
    std::string sentence { "cppreference.com" };
    std::cout << "The sentence: " << sentence << '\n';

    std::unordered_multiset<char> sequence;
    for (char x : sentence) {
        sequence.insert(x);
    }

    std::cout << "The sequence: { ";
    for (char x : sequence) {
        std::cout << x << ' ';
    }

    std::cout << "}\n"
                 "Symbol:Frequency: ";
    for (auto it = sequence.begin(); it != sequence.end();) {
        if (auto [first, last] = sequence.equal_range(*it); first != last) {
            std::cout << *first << ":" << std::distance(first, last) << "  ";
            it = last;
        } else {
            ++it;
        }
    }
}
