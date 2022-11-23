// cplusplus link https://cplusplus.com/reference/iomanip\put_time
// put_time example
#include <chrono> // std::chrono::system_clock
#include <ctime> // std::time_t, struct std::tm, std::localtime
#include <iomanip> // std::put_time
#include <iostream> // std::cout

int main()
{
    using std::chrono::system_clock;
    std::time_t tt = system_clock::to_time_t(system_clock::now());

    struct std::tm* ptm = std::localtime(&tt);
    std::cout << "Now (local time): " << std::put_time(ptm, "%c") << '\n';

    return 0;
}
