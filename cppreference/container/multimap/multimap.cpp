// cppreference link https://en.cppreference.com/w/cpp/container/multimap/multimap
#include <iostream>
#include <map>

struct Point {
    double x, y;
};
struct PointCmp {
    bool operator()(const Point& lhs, const Point& rhs) const
    {
        return lhs.x < rhs.x; // NB. ignores y on purpose
    }
};

int main()
{
    std::multimap<int, int> m = { { 1, 1 }, { 2, 2 }, { 3, 3 }, { 4, 4 }, { 5, 5 }, { 4, 4 }, { 3, 3 }, { 2, 2 }, { 1, 1 } };
    for (auto& p : m)
        std::cout << p.first << ' ' << p.second << '\n';

    // custom comparison
    std::multimap<Point, double, PointCmp> mag {
        { { 5, 12 }, 13 },
        { { 3, 4 }, 5 },
        { { 8, 15 }, 17 },
        { { 3, -3 }, -1 },
    };

    for (auto p : mag)
        std::cout << "The magnitude of (" << p.first.x
                  << ", " << p.first.y << ") is "
                  << p.second << '\n';
}
