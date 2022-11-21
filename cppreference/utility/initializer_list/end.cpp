// cppreference link https://en.cppreference.com/w/cpp/utility/initializer_list/end
#include <initializer_list>
#include <numeric>

int main()
{
    static constexpr auto l = { 15, 14 };
    static_assert(std::accumulate(l.begin(), l.end(), 13) == 42);
}
