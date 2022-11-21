// cppreference link https://en.cppreference.com/w/cpp/io/basic_osyncstream/basic_osyncstream
#include <iostream>
#include <string_view>
#include <syncstream>
#include <thread>

void worker(const int id, std::ostream& os)
{
    std::string_view block;
    switch (id) {
    default:
        [[fallthrough]];
    case 0:
        block = "██";
        break;
    case 1:
        block = "▓▓";
        break;
    case 2:
        block = "▒▒";
        break;
    case 3:
        block = "░░";
        break;
    }
    for (int i = 1; i <= 50; ++i) {
        os << block << std::flush;
    }
    os << std::endl;
}

int main()
{
    std::cout << "Synchronized output should not cause any interference:" << std::endl;
    {
        auto scout1 = std::osyncstream { std::cout };
        auto scout2 = std::osyncstream { std::cout };
        auto scout3 = std::osyncstream { std::cout };
        auto scout4 = std::osyncstream { std::cout };
        auto w1 = std::jthread { worker, 0, std::ref(scout1) };
        auto w2 = std::jthread { worker, 1, std::ref(scout2) };
        auto w3 = std::jthread { worker, 2, std::ref(scout3) };
        auto w4 = std::jthread { worker, 3, std::ref(scout4) };
    }

    std::cout << "\nLack of synchronization may cause some interference on output:" << std::endl;
    {
        auto w1 = std::jthread { worker, 0, std::ref(std::cout) };
        auto w2 = std::jthread { worker, 1, std::ref(std::cout) };
        auto w3 = std::jthread { worker, 2, std::ref(std::cout) };
        auto w4 = std::jthread { worker, 3, std::ref(std::cout) };
    }
}
