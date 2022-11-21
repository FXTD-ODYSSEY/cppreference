// cppreference link https://en.cppreference.com/w/cpp/container/forward_list/emplace_after
#include <forward_list>
#include <iostream>
#include <string>

struct Sum {
    std::string remark;
    int sum;

    Sum(std::string remark, int sum)
        : remark { std::move(remark) }
        , sum { sum }
    {
    }

    void print() const
    {
        std::cout << remark << " = " << sum << '\n';
    }
};

int main()
{
    std::forward_list<Sum> list;

    auto iter = list.before_begin();
    std::string str { "1" };
    for (int i { 1 }, sum { 1 }; i != 10; sum += i) {
        iter = list.emplace_after(iter, str, sum);
        ++i;
        str += " + " + std::to_string(i);
    }

    for (const Sum& s : list)
        s.print();
}
