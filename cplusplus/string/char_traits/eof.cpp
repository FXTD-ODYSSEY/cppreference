// cplusplus link https://cplusplus.com/reference/string\char_traits\eof
// char_traits::eof
#include <iostream> // std::wcin, std::wcout
#include <string> // std::wstring, std::char_traits

int main()
{
    std::wcout << "Please enter some text: ";

    if (std::wcin.peek() == std::char_traits<wchar_t>::eof()) {
        std::wcout << "Reading error";
    } else {
        std::wstring ws;
        std::getline(std::wcin, ws);
        std::wcout << "You entered a word: " << ws << '\n';
    }

    return 0;
}
