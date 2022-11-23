// cplusplus link https://cplusplus.com/reference/locale\wstring_convert\wstring_convert
// wstring_convert constructors
#include <codecvt> // std::codecvt_utf8
#include <iostream> // std::cout
#include <locale> // std::wstring_convert
#include <string> // std::string, std::wstring

int main()
{
    typedef std::codecvt_utf8<wchar_t> ccvt;

    std::wstring_convert<ccvt> foo;
    std::wstring_convert<ccvt> bar(new ccvt, ccvt::state_type());
    std::wstring_convert<ccvt> baz("[error]", L"[error]");

    std::wstring wstr(L"test");
    std::string str = baz.to_bytes(wstr);

    std::cout << str << '\n';

    return 0;
}
