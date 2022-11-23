// cplusplus link https://cplusplus.com/reference/chrono\duration_cast
// duration_cast
#include <chrono> // std::chrono::seconds, std::chrono::milliseconds
#include <iostream> // std::cout
    // std::chrono::duration_cast

int main()
{
    std::chrono::seconds s(1); // 1 second
    std::chrono::milliseconds ms = std::chrono::duration_cast<std::chrono::milliseconds>(s);

    ms += std::chrono::milliseconds(2500); // 2500 millisecond

    s = std::chrono::duration_cast<std::chrono::seconds>(ms); // truncated

    std::cout << "ms: " << ms.count() << std::endl;
    std::cout << "s: " << s.count() << std::endl;

    return 0;
}
