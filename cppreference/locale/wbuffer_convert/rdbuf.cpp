// cppreference link https://en.cppreference.com/w/cpp/locale/wbuffer_convert/rdbuf
#include <codecvt>
#include <iostream>
#include <locale>
#include <sstream>
int main()
{
    // convert UTF-8 to UCS4
    std::stringbuf utf8buf(u8"z\u00df\u6c34\U0001d10b"); // or u8"zß水𝄋"
                                                         // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";
    std::wbuffer_convert<std::codecvt_utf8<wchar_t>> conv(&utf8buf);
    std::wistream ucsbuf(&conv);
    std::cout << "Reading from a UTF-8 stringbuf via wbuffer_convert:\n";
    for (wchar_t c; ucsbuf.get(c);)
        std::cout << std::hex << std::showbase << c << '\n';

    // reuse the same wbuffer_convert to handle UCS4 to UTF-8 output
    conv.rdbuf(std::cout.rdbuf());
    std::wostream out(&conv);
    std::cout << "Sending UCS4 data to std::cout via wbuffer_convert:\n";
    out << L"z\u00df\u6c34\U0001d10b\n";
}
