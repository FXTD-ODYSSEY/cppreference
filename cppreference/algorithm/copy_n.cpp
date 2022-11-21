// cppreference link https://en.cppreference.com/w/cpp/algorithm/copy_n
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

int main()
{
    std::string in = "1234567890";
    std::string out;

    std::copy_n(in.begin(), 4, std::back_inserter(out));
    std::cout << out << '\n';

    std::vector<int> v_in(128);
    std::iota(v_in.begin(), v_in.end(), 1);
    std::vector<int> v_out(v_in.size());

    std::copy_n(v_in.cbegin(), 100, v_out.begin());
    std::cout << std::accumulate(v_out.begin(), v_out.end(), 0) << '\n';
}
