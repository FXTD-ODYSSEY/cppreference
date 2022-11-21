// cppreference link https://en.cppreference.com/w/cpp/container/set/emplace_hint
#include <chrono>
#include <functional>
#include <iomanip>
#include <iostream>
#include <set>

const int n_operations = 100500;

std::size_t set_emplace()
{
    std::set<int> set;
    for (int i = 0; i < n_operations; ++i) {
        set.emplace(i);
    }
    return set.size();
}

std::size_t set_emplace_hint()
{
    std::set<int> set;
    auto it = set.begin();
    for (int i = 0; i < n_operations; ++i) {
        set.emplace_hint(it, i);
        it = set.end();
    }
    return set.size();
}

std::size_t set_emplace_hint_wrong()
{
    std::set<int> set;
    auto it = set.begin();
    for (int i = n_operations; i > 0; --i) {
        set.emplace_hint(it, i);
        it = set.end();
    }
    return set.size();
}

std::size_t set_emplace_hint_corrected()
{
    std::set<int> set;
    auto it = set.begin();
    for (int i = n_operations; i > 0; --i) {
        set.emplace_hint(it, i);
        it = set.begin();
    }
    return set.size();
}

std::size_t set_emplace_hint_closest()
{
    std::set<int> set;
    auto it = set.begin();
    for (int i = 0; i < n_operations; ++i) {
        it = set.emplace_hint(it, i);
    }
    return set.size();
}

void timeit(std::function<std::size_t()> set_test, const char* what = nullptr)
{
    const auto start = std::chrono::system_clock::now();
    const std::size_t setsize = set_test();
    const auto stop = std::chrono::system_clock::now();
    const std::chrono::duration<double, std::milli> time = stop - start;
    if (what != nullptr && setsize > 0) {
        std::cout << std::setw(6) << time.count() << "  ms for " << what << '\n';
    }
}

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    timeit(set_emplace); // stack warmup
    timeit(set_emplace, "plain emplace");
    timeit(set_emplace_hint, "emplace with correct hint");
    timeit(set_emplace_hint_wrong, "emplace with wrong hint");
    timeit(set_emplace_hint_corrected, "corrected emplace");
    timeit(set_emplace_hint_closest, "emplace using returned iterator");
}
