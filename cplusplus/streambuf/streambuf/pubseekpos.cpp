// cplusplus link https://cplusplus.com/reference/streambuf\streambuf\pubseekpos
// changing position with pubseekpos
#include <fstream> // std::fstream
#include <iostream> // std::cout, std::streambuf

int main()
{

    std::fstream filestr("test.txt");
    if (filestr) {
        std::streambuf* pbuf = filestr.rdbuf();
        long size = pbuf->pubseekoff(0, filestr.end); // get size
        if (size > 20) {
            char buffer[11];
            // change position to the 10th character
            pbuf->pubseekpos(10);
            // read 10 characters
            pbuf->sgetn(buffer, 10);
            // append null character to string
            buffer[10] = 0;
            std::cout << buffer << '\n';
        }
        filestr.close();
    }
    return 0;
}
