// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/replace
#include <cassert>
#include <cstddef>
#include <iostream>
#include <string>
#include <string_view>

std::size_t replace_all(std::string& inout, std::string_view what, std::string_view with);
std::size_t remove_all(std::string& inout, std::string_view what);
void test_replace_remove_all();

int main()
{
    std::string str { "The quick brown fox jumps over the lazy dog." };

    str.replace(10, 5, "red"); // (5)

    str.replace(str.begin(), str.begin() + 3, 1, 'A'); // (6)

    std::cout << str << "\n\n";

    test_replace_remove_all();
}

std::size_t replace_all(std::string& inout, std::string_view what, std::string_view with)
{
    std::size_t count {};
    for (std::string::size_type pos {};
         inout.npos != (pos = inout.find(what.data(), pos, what.length()));
         pos += with.length(), ++count) {
        inout.replace(pos, what.length(), with.data(), with.length());
    }
    return count;
}

std::size_t remove_all(std::string& inout, std::string_view what)
{
    return replace_all(inout, what, "");
}

void test_replace_remove_all()
{
    std::string str2 { "ftp: ftpftp: ftp:" };
    std::cout << "#1 " << str2 << '\n';

    auto count = replace_all(str2, "ftp", "http");
    assert(count == 4);
    std::cout << "#2 " << str2 << '\n';

    count = replace_all(str2, "ftp", "http");
    assert(count == 0);
    std::cout << "#3 " << str2 << '\n';

    count = remove_all(str2, "http");
    assert(count == 4);
    std::cout << "#4 " << str2 << '\n';
}
