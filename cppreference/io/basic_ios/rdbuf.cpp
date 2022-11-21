// cppreference link https://en.cppreference.com/w/cpp/io/basic_ios/rdbuf
#include <iostream>
#include <sstream>

int main()
{
    std::ostringstream local;
    auto cout_buff = std::cout.rdbuf(); // save pointer to std::cout buffer

    std::cout.rdbuf(local.rdbuf()); // substitute internal std::cout buffer with
                                    // buffer of 'local' object

    // now std::cout work with 'local' buffer
    // you don't see this message
    std::cout << "some message";

    // go back to old buffer
    std::cout.rdbuf(cout_buff);

    // you will see this message
    std::cout << "back to default buffer\n";

    // print 'local' content
    std::cout << "local content: " << local.str() << "\n";
}
