// cppreference link https://en.cppreference.com/w/cpp/string/byte/memcmp
#include <cstring>
#include <iostream>

void demo(const char* lhs, const char* rhs, std::size_t sz)
{
    std::cout << std::string(lhs, sz);
    const int rc = std::memcmp(lhs, rhs, sz);
    if (rc < 0)
        std::cout << " precedes ";
    else if (rc > 0)
        std::cout << " follows ";
    else
        std::cout << " compares equal to ";
    std::cout << std::string(rhs, sz) << " in lexicographical order\n";
}

int main()
{
    char a1[] = { 'a', 'b', 'c' };
    char a2[sizeof a1] = { 'a', 'b', 'd' };

    demo(a1, a2, sizeof a1);
    demo(a2, a1, sizeof a1);
    demo(a1, a1, sizeof a1);
}
