// cppreference link https://en.cppreference.com/w/cpp/locale/locale/operator()
#include <algorithm>
#include <cassert>
#include <locale>
#include <string>
#include <vector>

int main()
{
    std::vector<std::wstring> v = { L"жил", L"был", L"пёс" };
    std::sort(v.begin(), v.end(), std::locale("ru_RU.UTF8"));
    assert(v[0] == L"был");
    assert(v[1] == L"жил");
    assert(v[2] == L"пёс");
}
