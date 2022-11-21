// cppreference link https://en.cppreference.com/w/cpp/locale/codecvt/in
#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    auto const& f = std::use_facet<std::codecvt<wchar_t, char, std::mbstate_t>>(std::locale());
    std::string external = "z\u00df\u6c34\U0001d10b"; // or u8"zß水𝄋"
                                                      // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";

    // note that the following can be done with wstring_convert
    std::mbstate_t mb = std::mbstate_t(); // initial shift state
    std::wstring internal(external.size(), '\0');
    const char* from_next;
    wchar_t* to_next;
    f.in(mb, &external[0], &external[external.size()], from_next,
        &internal[0], &internal[internal.size()], to_next);
    // error checking skipped for brevity
    internal.resize(to_next - &internal[0]);

    std::wcout << L"The string in wide encoding: " << internal << '\n';
}
