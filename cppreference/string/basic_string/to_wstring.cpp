// cppreference link https://en.cppreference.com/w/cpp/string/basic_string/to_wstring
#include <iostream>
#include <string>

int main()
{
    for (const double f : { 23.43, 1e-9, 1e40, 1e-40, 123456789. }) {
        std::wcout << "std::wcout: " << f << '\n'
                   << "to_wstring: " << std::to_wstring(f) << "\n\n";
    }
}
