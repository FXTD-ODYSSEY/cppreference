// cppreference link https://en.cppreference.com/w/cpp/locale/time_put_byname
#include <codecvt>
#include <ctime>
#include <iomanip>
#include <iostream>

int main()
{
    std::time_t t = std::time(nullptr);
    std::wbuffer_convert<std::codecvt_utf8<wchar_t>> conv(std::cout.rdbuf());
    std::wostream out(&conv);

    out.imbue(std::locale(out.getloc(),
        new std::time_put_byname<wchar_t>("ja_JP")));
    out << std::put_time(std::localtime(&t), L"%A%c") << '\n';

    out.imbue(std::locale(out.getloc(),
        new std::time_put_byname<wchar_t>("ru_RU.utf8")));
    out << std::put_time(std::localtime(&t), L"%A%c") << '\n';

    out.imbue(std::locale(out.getloc(),
        new std::time_put_byname<wchar_t>("sv_SE.utf8")));
    out << std::put_time(std::localtime(&t), L"%A%c") << '\n';
}
