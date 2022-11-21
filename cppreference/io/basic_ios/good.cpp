// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/good
#include <cstdlib>
#include <fstream>
#include <iostream>
int main()
{
    const char* fname = "/tmp/test.txt";
    std::ofstream ofile { fname };
    ofile << "10 "
          << "11 "
          << "12 "
          << "non-int";
    ofile.close();

    std::ifstream file { fname };
    if (!file.good()) {
        std::cout << "#1. Opening file test.txt failed - "
                     "one of the error flags is true\n";
        return EXIT_FAILURE;
    }

    // typical C++ I/O loop uses the return value of the I/O function
    // as the loop controlling condition, operator bool() is used here
    for (int n; file >> n;) {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    if (file.bad()) {
        std::cout << "#2. I/O error while reading - badbit is true\n";
        return EXIT_FAILURE;
    } else if (file.eof()) {
        std::cout << "#3. End of file reached successfully - eofbit is true\n"
                     "This is fine even though file.good() is false\n";
    } else if (file.fail()) {
        std::cout << "#4. Non-integer data encountered - failbit is true\n";
    }
}
