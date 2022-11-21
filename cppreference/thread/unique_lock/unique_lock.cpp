// cppreference link https://en.cppreference.com/w/cpp/thread/unique_lock/unique_lock
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
std::mutex m_a, m_b, m_c;
int a, b, c = 1;
void update()
{
    { // Note: std::lock_guard or atomic<int> can be used instead
        std::unique_lock<std::mutex> lk(m_a);
        a++;
    }

    { // Note: see std::lock and std::scoped_lock for details and alternatives
        std::unique_lock<std::mutex> lk_b(m_b, std::defer_lock);
        std::unique_lock<std::mutex> lk_c(m_c, std::defer_lock);
        std::lock(lk_b, lk_c);
        b = std::exchange(c, b + c);
    }
}

int main()
{
    std::vector<std::thread> threads;
    for (unsigned i = 0; i < 12; ++i)
        threads.emplace_back(update);

    for (auto& i : threads)
        i.join();

    std::cout << a << "'th and " << a + 1 << "'th Fibonacci numbers: "
              << b << " and " << c << '\n';
}
