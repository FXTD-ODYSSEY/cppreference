// cppreference link https://en.cppreference.com/w/cpp/container/map/end
#include <cmath>
#include <iostream>
#include <map>

struct Point {
    double x, y;
};

// Compare the x-coordinates of two Point pointers
struct PointCmp {
    bool operator()(const Point* lhs, const Point* rhs) const
    {
        return lhs->x < rhs->x;
    }
};

int main()
{
    // Note that although the x-coordinates are out of order, the
    //  map will be iterated through by increasing x-coordinates
    Point points[3] = { { 2, 0 }, { 1, 0 }, { 3, 0 } };

    // mag is a map sending the address of node to its magnitude in the x-y plane
    // Although the keys are pointers-to-Point, we want to order the map by the
    //  x-coordinates of the points and NOT by the addresses of the Points. This
    //  is done by using the PointCmp class's comparison method.
    std::map<Point*, double, PointCmp> mag({ { points, 2 },
        { points + 1, 1 },
        { points + 2, 3 } });

    // Change each y-coordinate from 0 to the magnitude
    for (auto iter = mag.begin(); iter != mag.end(); ++iter) {
        auto cur = iter->first; // pointer to Node
        cur->y = mag[cur]; // could also have used  cur->y = iter->second;
    }

    // Update and print the magnitude of each node
    for (auto iter = mag.begin(); iter != mag.end(); ++iter) {
        auto cur = iter->first;
        mag[cur] = std::hypot(cur->x, cur->y);
        std::cout << "The magnitude of (" << cur->x << ", " << cur->y << ") is ";
        std::cout << iter->second << '\n';
    }

    // Repeat the above with the range-based for loop
    for (auto i : mag) {
        auto cur = i.first;
        cur->y = i.second;
        mag[cur] = std::hypot(cur->x, cur->y);
        std::cout << "The magnitude of (" << cur->x << ", " << cur->y << ") is ";
        std::cout << mag[cur] << '\n';
        // Note that in contrast to std::cout << iter->second << '\n'; above,
        // std::cout << i.second << '\n'; will NOT print the updated magnitude
        // If auto &i: mag was used instead, it will print the updated magnitude
    }
}
