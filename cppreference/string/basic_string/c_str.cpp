// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/c_str
#include <algorithm>
#include <cassert>
#include <cstring>
#include <string>

extern "C" {
void c_func(const char* c_str) { printf("c_func called with '%s'\n", c_str); }
}

int main()
{
    std::string const s("Emplary");
    const char* p = s.c_str();
    assert(s.size() == std::strlen(p));
    assert(std::equal(s.begin(), s.end(), p));
    assert(std::equal(p, p + s.size(), s.begin()));
    assert('\0' == *(p + s.size()));

    c_func(s.c_str());
}
