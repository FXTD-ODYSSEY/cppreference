// cppreference link https://en.cppreference.com/w/cpp/container/set/count
#include <iostream>
#include <set>

struct S {
    int x;
    S(int i)
        : x { i }
    {
        std::cout << "S{" << i << "} ";
    }
    bool operator<(S const& s) const { return x < s.x; }
};

struct R {
    int x;
    R(int i)
        : x { i }
    {
        std::cout << "R{" << i << "} ";
    }
    bool operator<(R const& r) const { return x < r.x; }
};
bool operator<(R const& r, int i) { return r.x < i; }
bool operator<(int i, R const& r) { return i < r.x; }

int main()
{
    std::set<int> t { 3, 1, 4, 1, 5 };
    std::cout << t.count(1) << ", " << t.count(2) << ".\n";

    std::set<S> s { 3, 1, 4, 1, 5 };
    std::cout << ": " << s.count(1) << ", " << s.count(2) << ".\n";
    // Two temporary objects S{1} and S{2} were created.
    // Comparison function object is defaulted std::less<S>,
    // which is not transparent (has no is_transparent member type).

    std::set<R, std::less<>> r { 3, 1, 4, 1, 5 };
    std::cout << ": " << r.count(1) << ", " << r.count(2) << ".\n";
    // C++14 heterogeneous lookup; temporary objects were not created.
    // Comparator std::less<void> has predefined is_transparent.
}
