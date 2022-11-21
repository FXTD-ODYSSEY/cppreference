// cppreference link https://en.cppreference.com/w/cpp/container/unordered_set/insert
#include <array>
#include <iostream>
#include <unordered_set>

std::ostream& operator<<(std::ostream& os, std::unordered_set<int> const& s)
{
    for (os << "[" << s.size() << "] { "; int i : s)
        os << i << ' ';
    return os << "}\n";
}

int main()
{
    std::unordered_set<int> nums = { 2, 3, 4 };

    std::cout << "Initially: " << nums;
    auto p = nums.insert(1); // insert element
    std::cout << "'1' was inserted: " << std::boolalpha << p.second << '\n';
    std::cout << "After insertion: " << nums;

    nums.insert(p.first, 0); // insert with hint
    std::cout << "After insertion: " << nums;

    std::array<int, 4> a = { 10, 11, 12, 13 };
    nums.insert(a.begin(), a.end()); // insert range
    std::cout << "After insertion: " << nums;

    nums.insert({ 20, 21, 22, 23 }); // insert initializer_list
    std::cout << "After insertion: " << nums;

    std::unordered_set<int> other_nums = { 42, 43 };
    auto node = other_nums.extract(other_nums.find(42));
    nums.insert(std::move(node)); // insert node
    std::cout << "After insertion: " << nums;

    node = other_nums.extract(other_nums.find(43));
    nums.insert(nums.begin(), std::move(node)); // insert node with hint
    std::cout << "After insertion: " << nums;
}
