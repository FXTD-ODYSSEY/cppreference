// cppreference link https://en.cppreference.com/w/cpp/utility/initializer_list/begin
#include <initializer_list>

int main()
{
    static constexpr auto il = { 42, 24 };
    static_assert(*il.begin() == 0x2A);
}
