// cppreference link https://en.cppreference.com/w/cpp/string/wide/wcscspn
#include <cwchar>
#include <iostream>
#include <locale>

int main()
{
    wchar_t dest[] = L"白猫 黑狗 甲虫";
    //                      └───┐
    const wchar_t* src = L"甲虫,黑狗";

    const std::size_t len = std::wcscspn(dest, src);
    dest[len] = L'\0'; // terminates the segment to print it out

    std::wcout.imbue(std::locale("en_US.utf8"));
    std::wcout << L"The length of maximum initial segment is " << len << L".\n";
    std::wcout << L"The segment is \"" << dest << L"\".\n";
}
