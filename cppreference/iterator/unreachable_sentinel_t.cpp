// cppreference link https://en.cppreference.com/w/cpp/iterator/unreachable_sentinel_t
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>

template <class CharT>
constexpr std::size_t strlen(const CharT* s)
{
    return std::ranges::find(s, std::unreachable_sentinel, CharT {}) - s;
}

template <class CharT>
constexpr std::size_t pos(const CharT* haystack, const CharT* needle)
{
    // search(begin, unreachable_sentinel) is usually more efficient than
    // search(begin, end) due to one less comparison per cycle.
    // But "needle" MUST BE in the "haystack", otherwise the call is UB,
    // which is a compile-time error in constexpr context.
    return std::ranges::search(
               haystack, std::unreachable_sentinel,
               needle, needle + strlen(needle))
               .begin()
        - haystack;
}

int main()
{
    static_assert(
        strlen("The quick brown fox jumps over the lazy dog.") == 44);

    static_assert(
        pos("const short int", "short") == 6);

    //  static_assert(pos("long int", "float")); // compile-time error
}
