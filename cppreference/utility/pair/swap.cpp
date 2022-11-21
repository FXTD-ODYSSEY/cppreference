// cppreference link https://en.cppreference.com/w/cpp/utility/pair/swap
#include <iostream>
#include <string>
#include <utility>
int main()
{
    std::pair<int, std::string> p1(10, "test"), p2;
    p2.swap(p1);
    std::cout << "(" << p2.first << ", " << p2.second << ")\n";

#if __cpp_lib_ranges_zip >= 202110L
    // Using the C++23 const qualified swap overload
    // (swap is no longer propagating pair constness)
    int i1 = 10, i2 {};
    std::string s1("test"), s2;
    const std::pair<int&, std::string&> r1(i1, s1), r2(i2, s2);
    r2.swap(r1);
    std::cout << "(" << i2 << ", " << s2 << ")\n";
#endif
}
