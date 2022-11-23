// cplusplus link https://cplusplus.com/reference/string\to_wstring
// to_wstring example
#include <iostream> // std::wcout
#include <string> // std::wstring, std::to_wstring

int main()
{
    std::wstring pi = L"pi is " + std::to_wstring(3.1415926);
    std::wstring perfect = std::to_wstring(1 + 2 + 4 + 7 + 14) + L" is a perfect number";
    std::wcout << pi << L'\n';
    std::wcout << perfect << L'\n';
    return 0;
}
