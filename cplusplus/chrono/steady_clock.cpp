// cplusplus link https://cplusplus.com/reference/chrono\steady_clock
// steady_clock example
#include <chrono>
#include <ctime>
#include <iostream>
#include <ratio>

int main()
{
    using namespace std::chrono;

    steady_clock::time_point t1 = steady_clock::now();

    std::cout << "printing out 1000 stars...\n";
    for (int i = 0; i < 1000; ++i)
        std::cout << "*";
    std::cout << std::endl;

    steady_clock::time_point t2 = steady_clock::now();

    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    std::cout << "It took me " << time_span.count() << " seconds.";
    std::cout << std::endl;

    return 0;
}
