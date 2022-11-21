// cppreference link https://en.cppreference.com/w/cpp/container/map/map
#include <iomanip>
#include <iostream>
#include <map>
#include <string>

template <typename Key, typename Value>
std::ostream& operator<<(std::ostream& os, std::map<Key, Value> const& m)
{
    os << "{ ";
    for (auto const& p : m)
        os << '(' << p.first << ':' << p.second << ") ";
    return os << "}\n";
}

struct Point {
    double x, y;
};
struct PointCmp {
    bool operator()(const Point& lhs, const Point& rhs) const
    {
        return lhs.x < rhs.x; // NB. intentionally ignores y
    }
};

int main()
{
    // (1) Default constructor
    std::map<std::string, int> map1;
    map1["something"] = 69;
    map1["anything"] = 199;
    map1["that thing"] = 50;
    std::cout << "map1 = " << map1;

    // (4) Range constructor
    std::map<std::string, int> iter(map1.find("anything"), map1.end());
    std::cout << "\niter = " << iter;
    std::cout << "map1 = " << map1;

    // (6) Copy constructor
    std::map<std::string, int> copied(map1);
    std::cout << "\ncopied = " << copied;
    std::cout << "map1 = " << map1;

    // (8) Move constructor
    std::map<std::string, int> moved { std::move(map1) };
    std::cout << "\nmoved = " << moved;
    std::cout << "map1 = " << map1;

    // (10) Initializer list constructor
    const std::map<std::string, int> init {
        { "this", 100 },
        { "can", 100 },
        { "be", 100 },
        { "const", 100 },
    };
    std::cout << "\ninit = " << init;

    std::cout << "\nCustom Key class option 1:\n";
    // Use a comparison struct
    std::map<Point, double, PointCmp> mag = {
        { { 5, -12 }, 13 },
        { { 3, 4 }, 5 },
        { { -8, -15 }, 17 }
    };

    for (auto p : mag)
        std::cout << "The magnitude of (" << p.first.x
                  << ", " << p.first.y << ") is "
                  << p.second << '\n';

    std::cout << "\nCustom Key class option 2:\n";
    // Use a comparison lambda
    // This lambda sorts points according to their magnitudes, where note that
    //  these magnitudes are taken from the local variable mag
    auto cmpLambda = [&mag](const Point& lhs, const Point& rhs) {
        return mag[lhs] < mag[rhs];
    };
    // You could also use a lambda that is not dependent on local variables, like this:
    // auto cmpLambda = [](const Point &lhs, const Point &rhs) { return lhs.y < rhs.y; };
    std::map<Point, double, decltype(cmpLambda)> magy(cmpLambda);

    // Various ways of inserting elements:
    magy.insert(std::pair<Point, double>({ 5, -12 }, 13));
    magy.insert({ { 3, 4 }, 5 });
    magy.insert({ Point { -8.0, -15.0 }, 17 });

    for (auto p : magy)
        std::cout << "The magnitude of (" << p.first.x
                  << ", " << p.first.y << ") is "
                  << p.second << '\n';
}
