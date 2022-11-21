// cppreference link https://en.cppreference.com/w/cpp/locale/collate/transform
#include <iomanip>
#include <iostream>
#include <locale>

int main()
{
    std::locale::global(std::locale("sv_SE.utf8"));
    auto& f = std::use_facet<std::collate<wchar_t>>(std::locale());

    std::wstring in1 = L"\u00e4ngel";
    std::wstring in2 = L"\u00e5r";

    std::wstring out1 = f.transform(&in1[0], &in1[0] + in1.size());
    std::wstring out2 = f.transform(&in2[0], &in2[0] + in2.size());

    std::wcout << "In the Swedish locale: ";
    if (out1 < out2)
        std::wcout << in1 << " before " << in2 << '\n';
    else
        std::wcout << in2 << " before " << in1 << '\n';

    std::wcout << "In lexicographic comparison: ";
    if (in1 < in2)
        std::wcout << in1 << " before " << in2 << '\n';
    else
        std::wcout << in2 << " before " << in1 << '\n';
}
