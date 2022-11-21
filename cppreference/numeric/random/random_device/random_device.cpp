// cppreference link https://en.cppreference.com/w/cpp/numeric/random/random_device/random_device
#include <iostream>
#include <random>

void demo(std::random_device&& rd)
{
    static std::uniform_int_distribution<int> d(0, 9);
    for (int n = 0; n != 10; ++n) {
        std::cout << d(rd) << ' ';
    }
    std::cout << '\n';
}

int main()
{
    // Note: How the supplied token is handled is implementation-defined!

    // Default token for random_device is usually /dev/urandom on Linux
    demo(std::random_device {});

    // Request /dev/random, blocks when entropy is empty
    // Works on libstdc++, ignored in msvc++, might throw on libc++ (as of Nov 2022)
    demo(std::random_device { "/dev/random" });

    // Request non-blocking /dev/urandom, ensures that RDRAND is not used
    // Works on libstdc++ and libc++, ignored in msvc++ (as of Nov 2022)
    demo(std::random_device { "/dev/urandom" });

    // Request "hw", will use hardware-based random generation like rdrand
    // Works on libstdc++, ignored in msvc++, throws on libc++ (as of Nov 2022)
    demo(std::random_device { "hw" });
}
