// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/round
#include <chrono>
#include <iomanip>
#include <iostream>

int main()
{
    using namespace std::chrono_literals;
    using Sec = std::chrono::seconds;
    for (std::cout << "Duration\tFloor\tRound\tCeil\n"
                      "(ms)\t\t(sec)\t(sec)\t(sec)\n";
         auto const d : {
             +4999ms,
             +5000ms,
             +5001ms,
             +5499ms,
             +5500ms,
             +5999ms,
             -4999ms,
             -5000ms,
             -5001ms,
             -5499ms,
             -5500ms,
             -5999ms,
         }) {
        std::cout << std::showpos << d.count() << "\t\t"
                  << std::chrono::floor<Sec>(d).count() << '\t'
                  << std::chrono::round<Sec>(d).count() << '\t'
                  << std::chrono::ceil<Sec>(d).count() << '\n';
    }
}
