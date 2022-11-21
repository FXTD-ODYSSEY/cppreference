// cppreference link https://en.cppreference.com/w/cpp/iterator/ostreambuf_iterator/ostreambuf_iterator
#include <fstream>
#include <iostream>
#include <iterator>

int main()
{
    const char* file = "test.txt";
    {
        std::basic_filebuf<char> f;
        f.open(file, std::ios::out);
        std::ostreambuf_iterator<char> out1(&f);
        *out1 = 'a'; // writes to file via iterator
    }

    // read back from the file
    char a;
    std::cout << ((std::ifstream { file } >> a), a) << std::endl;

    std::ostreambuf_iterator<wchar_t> out2 { std::wcout };
    *out2 = L'b';
}
