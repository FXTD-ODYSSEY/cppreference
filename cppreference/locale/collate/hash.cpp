// cppreference link https://en.cppreference.com/w/cpp/locale/collate/hash
#include <iostream>
#include <locale>
#include <string>
#include <unordered_set>

struct CollateHash {
    template <typename CharT>
    long operator()(const std::basic_string<CharT>& s) const
    {
        return std::use_facet<std::collate<CharT>>(std::locale()).hash(&s[0], &s[0] + s.size());
    }
};
struct CollateEq {
    template <typename CharT>
    bool operator()(const std::basic_string<CharT>& s1,
        const std::basic_string<CharT>& s2) const
    {
        return std::use_facet<std::collate<CharT>>(std::locale()).compare(&s1[0], &s1[0] + s1.size(), &s2[0], &s2[0] + s2.size()) == 0;
    }
};

int main()
{
    std::locale::global(std::locale("en_US.utf8"));
    std::wcout.imbue(std::locale());

    std::unordered_set<std::wstring, CollateHash, CollateEq> s2 = { L"Foo", L"Bar" };
    for (auto& str : s2)
        std::wcout << str << ' ';
    std::cout << '\n';
}
