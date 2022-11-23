// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\sungetc
// sungetc example
#include <cstdio> // EOF
#include <iostream> // std::cin, std::cout, std::streambuf, std::streamsize

int main()
{
    char ch;
    std::streambuf* pbuf = std::cin.rdbuf();

    std::cout << "Please, enter some letters and then a number: ";
    do {
        ch = pbuf->sbumpc();

        if ((ch >= '0') && (ch <= '9')) {
            pbuf->sungetc();
            long n;
            std::cin >> n;
            std::cout << "You entered number " << n << '\n';
            break;
        }
    } while (ch != EOF);

    return 0;
}
