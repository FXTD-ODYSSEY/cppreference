// cppreference link https://en.cppreference.com/w/cpp/language/operator_other
#include <iostream>
#include <string>

struct Node {
    Node* next;
    int data;

    // deep-copying copy constructor
    Node(const Node& other)
        : next(other.next ? new Node(*other.next) : NULL)
        , data(other.data)
    {
    }

    Node(int d)
        : next(NULL)
        , data(d)
    {
    }

    ~Node() { delete next; }
};

int main()
{
    // simple rvalue example
    int n = 1 > 2 ? 10 : 11; // 1 > 2 is false, so n = 11

    // simple lvalue example
    int m = 10;
    (n == m ? n : m) = 7; // n == m is false, so m = 7

    // output the result
    std::cout << "n = " << n << "\nm = " << m;
}
