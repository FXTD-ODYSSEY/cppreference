// cppreference link https://en.cppreference.com/w/cpp/io/c/setbuf
#include <chrono>
#include <cstdio>
#include <thread>

int main()
{
    using namespace std::chrono_literals;

    std::setbuf(stdout, nullptr); // unbuffered stdout
    std::putchar('a'); // appears immediately on unbuffered stream
    std::this_thread::sleep_for(1s);
    std::putchar('b');
}
