// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\sputbackc
// sputbackc example
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
            pbuf->sputbackc(ch);
            long n;
            std::cin >> n;
            std::cout << "You entered number " << n << '\n';
            break;
        }
    } while (ch != EOF);

    return 0;
}
