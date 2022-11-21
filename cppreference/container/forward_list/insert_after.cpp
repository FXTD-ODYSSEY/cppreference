// cppreference link https://en.cppreference.com/w/cpp/container/forward_list/insert_after
#include <forward_list>
#include <iostream>
#include <string>
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& s, const std::forward_list<T>& v)
{
    s.put('[');
    char comma[3] = { '\0', ' ', '\0' };
    for (const auto& e : v) {
        s << comma << e;
        comma[0] = ',';
    }
    return s << ']';
}

int main()
{
    std::forward_list<std::string> words { "the", "frogurt", "is", "also", "cursed" };
    std::cout << "words: " << words << '\n';

    // insert_after (2)
    auto beginIt = words.begin();
    words.insert_after(beginIt, "strawberry");
    std::cout << "words: " << words << '\n';

    // insert_after (3)
    auto anotherIt = beginIt;
    ++anotherIt;
    anotherIt = words.insert_after(anotherIt, 2, "strawberry");
    std::cout << "words: " << words << '\n';

    // insert_after (4)
    std::vector<std::string> V = { "apple", "banana", "cherry" };
    anotherIt = words.insert_after(anotherIt, V.begin(), V.end());
    std::cout << "words: " << words << '\n';

    // insert_after (5)
    words.insert_after(anotherIt, { "jackfruit", "kiwifruit", "lime", "mango" });
    std::cout << "words: " << words << '\n';
}
