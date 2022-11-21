// cppreference link https://en.cppreference.com/w/cpp/container/map/emplace_hint
#include <chrono>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>

const int n_operations = 100500;

std::size_t map_emplace()
{
    std::map<int, char> map;
    for (int i = 0; i < n_operations; ++i) {
        map.emplace(i, 'a');
    }
    return map.size();
}

std::size_t map_emplace_hint()
{
    std::map<int, char> map;
    auto it = map.begin();
    for (int i = 0; i < n_operations; ++i) {
        map.emplace_hint(it, i, 'b');
        it = map.end();
    }
    return map.size();
}

std::size_t map_emplace_hint_wrong()
{
    std::map<int, char> map;
    auto it = map.begin();
    for (int i = n_operations; i > 0; --i) {
        map.emplace_hint(it, i, 'c');
        it = map.end();
    }
    return map.size();
}

std::size_t map_emplace_hint_corrected()
{
    std::map<int, char> map;
    auto it = map.begin();
    for (int i = n_operations; i > 0; --i) {
        map.emplace_hint(it, i, 'd');
        it = map.begin();
    }
    return map.size();
}

std::size_t map_emplace_hint_closest()
{
    std::map<int, char> map;
    auto it = map.begin();
    for (int i = 0; i < n_operations; ++i) {
        it = map.emplace_hint(it, i, 'e');
    }
    return map.size();
}

void timeit(std::function<std::size_t()> map_test, std::string what = "")
{
    auto start = std::chrono::system_clock::now();
    std::size_t mapsize = map_test();
    auto stop = std::chrono::system_clock::now();
    std::chrono::duration<double, std::milli> time = stop - start;
    if (what.size() > 0 && mapsize > 0) {
        std::cout << std::setw(5) << time.count() << "  ms for " << what << '\n';
    }
}

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    timeit(map_emplace); // stack warmup
    timeit(map_emplace, "plain emplace");
    timeit(map_emplace_hint, "emplace with correct hint");
    timeit(map_emplace_hint_wrong, "emplace with wrong hint");
    timeit(map_emplace_hint_corrected, "corrected emplace");
    timeit(map_emplace_hint_closest, "emplace using returned iterator");
}
