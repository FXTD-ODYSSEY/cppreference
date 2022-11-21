// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/find_first_of
#include <cassert>
#include <iostream>
#include <string>
#include <string_view>

int main()
{
    using namespace std::string_literals;
    std::string::size_type sz;

    // (1)
    sz = "alignas"s.find_first_of("klmn"s);
    //     └────────────────────────┘
    assert(sz == 1);
    sz = "alignof"s.find_first_of("wxyz"s);
    //
    assert(sz == std::string::npos);

    // (2)
    const char* buf = "xyzabc";
    sz = "consteval"s.find_first_of(buf, 0, 3);
    //
    assert(sz == std::string::npos);
    sz = "consteval"s.find_first_of(buf, 0, 6);
    //    └─────────────────────────┘c in buf
    assert(sz == 0);

    // (3)
    sz = "decltype"s.find_first_of(buf);
    //      └──────────────────────┘c in buf
    assert(sz == 2);

    // (4)
    sz = "co_await"s.find_first_of('a');
    //       └──────────────────────┘
    assert(sz == 3);

    // (5)
    std::string_view sv { "int" };
    sz = "constinit"s.find_first_of(sv);
    //      └───────────────────────┘n in sv
    assert(sz == 2);

    std::cout << "All tests passed.\n";
}
