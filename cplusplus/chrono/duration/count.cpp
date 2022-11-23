// cplusplus link https://cplusplus.com/reference/chrono\duration\count
// duration::count
#include <chrono> // std::chrono::seconds, std::chrono::milliseconds
#include <iostream> // std::cout
    // std::chrono::duration_cast

int main()
{
    using namespace std::chrono;
    // std::chrono::milliseconds is an instatiation of std::chrono::duration:
    milliseconds foo(1000); // 1 second
    foo *= 60;

    std::cout << "duration (in periods): ";
    std::cout << foo.count() << " milliseconds.\n";

    std::cout << "duration (in seconds): ";
    std::cout << foo.count() * milliseconds::period::num / milliseconds::period::den;
    std::cout << " seconds.\n";

    return 0;
}
