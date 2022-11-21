// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcslen
#include <clocale>
#include <cwchar>
#include <iostream>

int main()
{
    const wchar_t* str = L"爆ぜろリアル！弾けろシナプス！パニッシュメントディス、ワールド！";

    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));
    std::wcout << "The length of \"" << str << "\" is " << std::wcslen(str) << '\n';
}
