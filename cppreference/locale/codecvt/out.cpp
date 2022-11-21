// cppreference link https://en.cppreference.com/w/cpp/locale/codecvt/out
#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    auto& f = std::use_facet<std::codecvt<wchar_t, char, std::mbstate_t>>(std::locale());
    std::wstring internal = L"z\u00df\u6c34\U0001f34c"; // L"zß水🍌"

    // note that the following can be done with wstring_convert
    std::mbstate_t mb {}; // initial shift state
    std::string external(internal.size() * f.max_length(), '\0');
    const wchar_t* from_next;
    char* to_next;
    f.out(mb, &internal[0], &internal[internal.size()], from_next,
        &external[0], &external[external.size()], to_next);
    // error checking skipped for brevity
    external.resize(to_next - &external[0]);

    std::cout << "The string in narrow multibyte encoding: " << external << '\n';
}
