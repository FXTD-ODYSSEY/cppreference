// cppreference link https://en.cppreference.com/w/cpp/ranges/owning_view
#include <cassert>
#include <iostream>
#include <ranges>
#include <string>

int main()
{
    using namespace std::literals;
    std::ranges::owning_view ov { "cosmos"s }; // the deduced type of R is std::string;
                                               // `ov` is the only owner of this string
    assert(
        ov.empty() == false and ov.size() == 6 and ov.size() == ov.base().size() and ov.front() == 'c' and ov.front() == *ov.begin() and ov.back() == 's' and ov.back() == *(ov.end() - 1) and ov.data() == ov.base());

    std::cout << "sizeof(ov): " << sizeof ov << '\n' // typically equal to sizeof(R)
              << "range-for: ";
    for (const char ch : ov)
        std::cout << ch;
    std::cout << '\n';

    std::ranges::owning_view<std::string> ov2;
    assert(ov2.empty());
    //  ov2 = ov; // compile-time error: copy assignment operator is deleted
    ov2 = std::move(ov); // OK
    assert(ov2.size() == 6);
}
